//
//  directls.c
//  c_struct_hash
//
//  Created by iOSBacon on 2017/12/6.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#include "sort.h"
#include "directls.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static int compare_dir(const void *key1, const void *key2)
{
    int retval;
    if ((retval = strcmp(((const Directory *)key1)->name, ((const Directory *)key2)->name)) > 0) {
        return 1;
    } else if (retval < 0)
        return -1;
    else
        return 0;
}

int directory(const char *path, Directory **dir)
{
    DIR *dirptr;
    Directory *temp;
    struct dirent *curdir;
    int count;
    
    if ((dirptr = opendir(path)) == NULL) {
        return -1;
    }
    
    *dir = NULL;
    count = 0;
    while ((curdir = readdir(dirptr)) != NULL) {
        count ++;
        if ((temp = (Directory *)realloc(*dir, count * sizeof(Directory))) == NULL) {
            free(*dir);
            return -1;
        }else {
            *dir = temp;
        }
        strcpy(((*dir)[count - 1]).name, curdir->d_name);
    }
    closedir(dirptr);
    if (qksort(*dir, count, sizeof(Directory), 0, count - 1, compare_dir) != 0) {
        return -1;
    }
    return count;
}
