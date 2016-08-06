//
//  C_6_BookPractice.c
//  2_22_16_17
//
//  Created by iOSBacon on 16/5/9.
//  Copyright © 2016年 iOSBacon. All rights reserved.
//

#include "C_6_BookPractice.h"
#include <math.h>
#include <stdlib.h>

/*!
 *  @brief 是否是质数
 *  @param number 输入的数
 *  @return 是返回1，否返回0
 */
_Bool is_PrimeNumber(int number){
    float midNumber = sqrtf(number);
    for (int i = 2; i <= midNumber; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

void c6p1aloneNumber(){
    for (int i = 0; i < 100; i++) {
        if (is_PrimeNumber(i)) {
            printf("%d\n",i);
        }
    }
}

void c6p2selectSort(){
    int a[] = {5, 7, 5, 3, 1, 4, 6, 9, 3, 4};
    int arrayCount = sizeof(a) / sizeof(int);
    int maxIndex;
    for (int i = 0; i < arrayCount; i++) {
        maxIndex = i;
        for (int j = i; j < arrayCount; j++) {
            if (a[i] < a[j]) {
                maxIndex = j;
            }
        }
        int temp = a[maxIndex];
        a[maxIndex] = a[i];
        a[i] = temp;
    }
    for (int i = 0; i < arrayCount; i++) {
        printf("%d\t",a[i]);
    }
}

void c6p3_2Dimension(){
    int a[][3] = {0, 7, 5, 3, 1, 4, 6, 9, 3};
    int sum = 0;
    for (int i = 0; i < 3; i ++) {
        for (int k = 0; k < 3; k ++) {
            if (i == k || i + k == 2) {
                sum += a[i][k];
            }
            printf("%d\t",a[i][k]);
        }
        printf("\n");
    }
    printf("sum = %d\n",sum);
}

void c6p4sort_sortedArray(){
    for (int i = 0; i < 100; i++) {
        int b;
        printf("b = %d\n",b);
//        printf("&b = %p\n",&b);
    }
    int * array = (int *)malloc(5 * sizeof(int));
    int arraySec[] = {1,2,3,4,5};
    int arrayCount = sizeof(array)/sizeof(int);
    for (int i = 0; i < arrayCount; i++) {
        array[i] = arraySec[i];
    }
    int a;
    do {
        printf("input:\n");
        scanf("%d",&a);
        printf("\nbefore insert:\n");
        int insertPosition = 0;
        int isMarked = 0;
        for (int i = 0; i < arrayCount; i++) {
            if (isMarked == 0) {
                if (array[i] >= a) {
                    insertPosition = i;
                    isMarked = 1;
                }
            }
            printf("%d\t",array[i]);
        }
        int * arrayCopy = (int *)malloc(sizeof(int) * (arrayCount + 1));
        printf("\nafter insert:\n");
        for (int i = 0; i < arrayCount + 1; i++) {
            if (i < insertPosition) {
                arrayCopy[i] = array[i];
            }else if (i == insertPosition){
                arrayCopy[i] = a;
            }else{
                arrayCopy[i] = array[i - 1];
            }
        }
    } while (a != 'q');
}















