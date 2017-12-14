//
//  sort.h
//  c_struct_hash
//
//  Created by iOSBacon on 2017/12/4.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#ifndef sort_h
#define sort_h
#include <stdio.h>
int issort(void *data, int size, int esize, int(*compare)(const void *key1, const void *key2));
int qksort(void *data, int size, int esize, int i, int k, int (*compare)(const void *key1, const void *key2));
int mgsort(void *data, int size, int esize, int i, int k, int (*compare)(const void * key1, const void *key2));
int rxsort(int *data, int size, int p, int k);

#endif /* sort_h */
