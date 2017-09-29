//
//  hashpjw.c
//  DataStructureLearning
//
//  Created by iOSBacon on 2017/9/26.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#include "hashpjw.h"

unsigned int hashpjw(const void *key)
{
    const char *ptr;
    unsigned int val;
    /* Hash the key by performing a number of bit operation on it */
    val = 0;
    ptr = key;
    while (*ptr != '\0') {
        unsigned int tmp;
        val = (val << 4) + (*ptr);
        if ((tmp = (val & 0xf0000000))) {
            val = val ^ (tmp >> 24);
            val = val ^ tmp;
        }
        ptr ++;
    }
    return val % PRIME_TBLSIZE;
}
