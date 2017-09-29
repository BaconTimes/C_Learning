//
//  main.c
//  DataStructureLearning
//
//  Created by iOSBacon on 2017/8/28.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#include <stdio.h>
#include "sort.h"
#include "hashpjw.h"

int _compare(const void * int1, const void * int2) {
    int a = *(int *) int1;
    int b = *(int *) int2;
    if (a > b)
        return 1;
    else if (a < b)
        return -1;
    else
        return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    int a[] = {1, 3, 7, 1, 6, 7, 9, 2, 2, 8, 4};
//    printf("a[0] = %p, a[1] = %p\n",a , &a[1]);
//    char * b = (char *)(void *)a;
//    for (int i = 0; i < sizeof(int); i++) {
//        printf("b[0] = %d, b[%d] = %d\n",b[0+4], i , b[i]);
//    }

    const char * str = "weqeqweq";
    unsigned int a = hashpjw(str);
    printf("%u\n", a);

    
//    int size_a = sizeof(a) / sizeof(int);
//    issort((void *)a, size_a, sizeof(int), _compare);
//    
//    for (int i = 0; i < size_a; i++) {
//        printf("%-5d", a[i]);
//    }
//    printf("\n");
    return 0;
}
