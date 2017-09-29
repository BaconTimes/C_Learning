//
//  directls.h
//  DataList
//
//  Created by iOSBacon on 2017/3/28.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#ifndef directls_h
#define directls_h

#include <stdio.h>

#define MAXNAMLEN 65536

typedef struct Directory_
{
    char name[MAXNAMLEN + 1];
} Diretory;

int directory(const char * path, Diretory **dir);

#endif /* directls_h */
