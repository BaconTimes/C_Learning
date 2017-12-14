//
//  tools.c
//  c_struct_hash
//
//  Created by iOSBacon on 2017/12/5.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#include "tools.h"
#include <stdio.h>

int compare(const void *key1, const void *key2) {
    int int1 = *(const int *)key1;
    int int2 = *(const int *)key2;
    if (int1 > int2) {
        return 1;
    } else if(int1 < int2)
        return -1;
    else
        return 0;
}

void printList(const void *data, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d  ", (((const int *)data)[i]));
    }
    printf("\n");
}
