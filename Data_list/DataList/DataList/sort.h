//
//  sort.h
//  DataList
//
//  Created by iOSBacon on 2017/3/25.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#ifndef sort_h
#define sort_h

#include <stdlib.h>
#include <string.h>
/*!
 @param data 要排序的数组指针
 @param size 数组元素的个数
 @param esize 每个元素的大小
 @param compare 比较函数指针
 */
int issort(void *data, int size, int esize, int (* compare)(const void *key1, const void *key2));

int qksort(void *data, int size, int esize, int i, int k, int (*compare)(const void *key1, const void *key2));



#endif /* sort_h */
