//
//  directls.h
//  c_struct_hash
//
//  Created by iOSBacon on 2017/12/6.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#ifndef directls_h
#define directls_h

#include <dirent.h>

typedef struct Directory_ {
    char name[MAXNAMLEN + 1];
}Directory;

int directory(const char *path, Directory **dir);

#endif /* directls_h */
