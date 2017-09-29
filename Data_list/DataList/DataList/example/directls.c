//
//  directls.c
//  DataList
//
//  Created by iOSBacon on 2017/3/28.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#include "directls.h"
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"

/* compare_dir */

static int compare_dir(const void *key1, const void *key2)
{
    int retval;
    if ((retval = strcmp(((const Diretory *)key1)->name, ((const Diretory *)key2)->name)) > 0)
        return 1;
    else if(retval < 0)
        return -1;
    else
        return 0;
}

int directory(const char * path, Diretory **dir) {
    DIR *dirptr;
    Diretory *temp;
    struct dirent *curdir;
    int count;
    if ((dirptr = opendir(path)) == NULL)
        return -1;
    
    *dir = NULL;
    count = 0;
    while ((curdir = readdir(dirptr)) != NULL) {
        count++;
        if ((temp = (Diretory *)realloc(*dir, count * sizeof(Diretory))) == NULL) {
            free(*dir);
            return -1;
        }
        else
        {
            *dir = temp;
        }
        strcpy(((*dir)[count - 1]).name, curdir->d_name);
    }
    
    closedir(dirptr);
    
    if (qksort(*dir, count, sizeof(Diretory), 0, count - 1, compare_dir) != 0)
        return -1;
    
    return count;
}
