//
//  sort.h
//  DataStructureLearning
//
//  Created by iOSBacon on 2017/9/5.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#ifndef sort_h
#define sort_h

#include <stdio.h>

int issort(void *data, int size, int esize, int(*compare)(const void *key1, const void *key2));

#endif /* sort_h */
