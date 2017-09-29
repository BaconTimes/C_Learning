//
//  main.m
//  DataList
//
//  Created by iOSBacon on 2017/2/22.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <string.h>
#import <stdlib.h>

#import "list.h"
#import "sort.h"
#include "directls.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        int a[10], i;
        for (i = 1; i <= 10; i++) {
            a[i] = 0;
        }
        printf("%p, %p\n", &a[10], &i);
    }
    return 0;
}

int comapre_int(const void *key1, const void *key2) {
    const int * v1 = (const int *)key1;
    const int * v2 = (const int *)key2;
    if (*v1 > *v2) {
        return 1;
    } else if (*v1 == *v2) {
        return 0;
    } else {
        return -1;
    }
}

void createList() {
    void freeData(void * num);
    List * list = (List *)malloc(sizeof(List));
    list_init(list, &freeData);
    
    for(NSInteger i = 0; i < 5; i++) {
        int * num = (int *)malloc(sizeof(int));
        *num = (int)i;
        list_ins_next(list, list->tail, num);
    }
    
    list_tail(list)->next = list_head(list);
    
    printf("list_exist_circle = %d", list_exist_circle(list));
    
}

void freeData(void * num) {
    free(num);
}
