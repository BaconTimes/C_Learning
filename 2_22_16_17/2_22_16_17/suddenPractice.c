//
//  suddenPractice.c
//  2_22_16_17
//
//  Created by iOSBacon on 16/6/12.
//  Copyright © 2016年 iOSBacon. All rights reserved.
//

#include "suddenPractice.h"

void testBasicFunction(int n){
//    printf("%d", n);
    printf("  n.address = %p\n", &n);
}

void testPoint(int * p){
    printf("p = %d",* p);
}

void sortByBubble(int * array_Point, int arrayCount){
//    int * const ar_p = array_Point;
    
    for (int i = 0; i < arrayCount; i++) {
        for (int j = 0; j < arrayCount - i - 1; j++) {
            if (*(array_Point + j) > *(array_Point + j + 1)) {
                int temp = *(array_Point + j + 1);
                *(array_Point + j + 1) = *(array_Point + j);
                *(array_Point + j) = temp;
            }
        }
    }
}

void nmsize(int n, int m, int indexArray[], int arrayCount){
    int ** arr_new = (int **)malloc(n * sizeof(int *));
    int intSize = sizeof(int);
    for (int i = 0; i < n; i++) {
        arr_new[i] = (int *)malloc(m * intSize);
    }
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (index < arrayCount) {
                arr_new[i][j] = indexArray[index ++];
            }else{
                arr_new[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", arr_new[i][j]);
        }
        printf("\n");
    }
//    int stack[100] = {0};
//    int stackIndex = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int value = arr_new[i][j];
            if (value != 0){
                int isConnect = 0;
                int vIndex = i + 1;
                int hIndex = j + 1;
                if (vIndex < n && arr_new[vIndex][j] >= 1) {
                    isConnect = 1;
                }
                if (hIndex < m && arr_new[i][hIndex] >= 1) {
                    isConnect = 1;
                }
                if (isConnect == 1) {
                    arr_new[i][j] = 0;

                }
            }
        }
        printf("\n");
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", arr_new[i][j]);
        }
        printf("\n");
    }

    
    printf("\n");
    int allCount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr_new[i][j]) {
                allCount ++;
            }
        }
    }

    printf("allCount = %d\n", allCount);
}