//
//  C_8_BookPractice.c
//  2_22_16_17
//
//  Created by iOSBacon on 16/6/23.
//  Copyright © 2016年 iOSBacon. All rights reserved.
//

#include "C_8_BookPractice.h"
#include "FunctionFile.h"
#include "string.h"
#include "stdlib.h"

void clear_P(void * p){
    p = NULL;
}

void c8p1SortThreeNumber(){
    int const ac = 3;
    int a[ac] = {0};
    int * p = a;
    int * p1 = NULL;
    int * p2 = NULL;
    void exchange(int * num1_p, int * num2_p);
    printf("input three number:\n");
    for (int i = 0; i < ac; i++) {
        scanf("%d", p + i);
    }
    for (int i = 0; i < ac; i++) {
        for (int j = 0; j < ac - 1 - i; j++) {
            p1 = p + j;
            p2 = p1 + 1;
            if (*p1 > *p2) {
                exchange(p1, p2);
            }
        }
    }
    for (int i = 0; i < ac; i++) {
        printf("%d\t",*(p + i));
    }
    printf("\n");
    clear_P(p1);
    clear_P(p2);
    clear_P(p);
}

void c8p2SortThreeString(){
    int const strCount = 3;
    int const strLen = 100;
    char * strings[strCount] = {NULL,NULL,NULL};
    for (int i = 0; i < strCount; i++) {
        char * a = malloc(sizeof(char) * strLen);
        printf("input %dth string, end up with the key of enter\n", i + 1);
        scanf("%s", a);
        *(strings + i) = a;
        free(a);
    }
    
    for (int i = 0; i < strCount; i++) {
        for (int j = 0; j < strCount - i - 1; j++) {
            char * str1_p = *(strings + j);
            char * str2_p = *(strings + j + 1);
//            printf("str1_p = %s\n", str1_p);
//            printf("str2_p = %s\n", str2_p);
//            printf("strcmp(str1_p, str2_p) = %d\n",strcmp(str1_p, str2_p));
            if (strcmp(str1_p, str2_p) > 0) {
                char tepStr_p = *str1_p;
                *str1_p = *str2_p;
                *str2_p = tepStr_p;
            }
        }
    }
    printf("\nThe right order is:\n");
    for (int i = 0; i < strCount; i++) {
        char * temStr = *(strings + i);
        printf("%s\n", temStr);
        free(temStr);
    }
}

void c8p3dealMaxMinInArray(){
    void inputNumbers(int * arr_p, int count);
    void dealNumbers(int * arr_p, int count);
    void outputNumbers(int * arr_p, int count);
    int const arrCount = 10;
    int numArr[arrCount] = {9, 1,5,-2,-2,12,7,0,-1,10};
//    inputNumbers(numArr, arrCount);
    outputNumbers(numArr, arrCount);
    dealNumbers(numArr, arrCount);
    outputNumbers(numArr, arrCount);
}

void c8p4moveArray(){
    void outputNumbers(int * arr_p, int count);
    void moveArrayWithIndex(int arr[], int const arc, int const index);
    int const arrCount = 10;
    int numArr[arrCount] = {9, 1,5,-2 ,-2,12,7,0,-1,10};
    outputNumbers(numArr, arrCount);
    moveArrayWithIndex(numArr, arrCount, 2);
    outputNumbers(numArr, arrCount);
}

void c8p5countRemove(){
    int checkLeftNumberIntArray(int arr[], int arc, int flag);
    void outputNumbers(int * arr_p, int count);
    int  a = 0;
    printf("Please input a integer\n");
    scanf("%d",&a);
    int const allCount = a;
    int leftCount = allCount;
    int flag = 1;
    int array[allCount];
    for (int i = 0; i < allCount; i++) {
        *(array + i) = flag;
    }
    outputNumbers(array, allCount);
    int counterStartIndex = 0;
    int countStep = 3;
    while (leftCount > 1) {
        //计算3次，然后将最后一次的数据置为0
        int resultCount = 0;
        while (resultCount < countStep) {
            //将整个数组遍历一遍
            while (leftCount > 1) {
                if (counterStartIndex >= allCount) {
                    counterStartIndex = counterStartIndex % allCount;
                }
                if (*(array + counterStartIndex++) == flag) {
                    resultCount ++;
                    break;
                }
            }
        }
        int realIndex = (counterStartIndex >= 1)?(counterStartIndex - 1):(allCount - 1);
        *(array + realIndex) = 0;
        if (counterStartIndex >= allCount) {
            counterStartIndex = counterStartIndex % allCount;
        }
        leftCount = checkLeftNumberIntArray(array, allCount, flag);
        outputNumbers(array, allCount);
    }
    outputNumbers(array, allCount);
}

void c8p6LengthOfString(){
    int maxLength = 100;
    char * p = (char *)malloc(sizeof(char) * maxLength);
    char * mp = p;
    printf("Please input a string\n");
    scanf("%s",p);
    int totalLength = 0;
    for (int i = 0; i <maxLength ; i++) {
        if (*mp++ == '\0') {
            totalLength = i;
            break;
        }
    }
    p = (char *)realloc(p, totalLength*sizeof(char));
    printf("string is = %s\n",p);
    printf("totalLength = %d\n",totalLength);
}

void c8p7copyString(){
    char p[] = "332423niogqp3ro";
    char * copyStringFromIndx(char const * str_p, int fromIndex);
    printf("%s\n", copyStringFromIndx(p, 3));
}

void c8p8counterString(){
    char * p = "wiorofqo*23b%……%……&……%……#712A 341234&*……qweubf【qefvaef";
    unsigned long c = strlen(p);
    int capLetCou = 0, smaLetCou = 0, spaceCou = 0, numCou = 0, othCou = 0;
    char * mp = p;
    for (unsigned long i = 0; i < c; i++) {
        char tc = *(mp++);
        if (tc >= '0' && tc <= '9') {
            numCou++;
        }else if (tc >= 'A' && tc <= 'Z'){
            capLetCou ++;
        }else if (tc >= 'a' && tc <= 'z'){
            smaLetCou ++;
        }else if (tc == ' '){
            spaceCou ++;
        }else{
            othCou ++;
        }
    }
    printf("capLetCou= %d\nsmaLetCou = %d\nspaceCou = %d\nnumCou = %d\nothCou = %d\n", capLetCou, smaLetCou, spaceCou, numCou, othCou);
}

void c8p9reversSq(){
    array_2D arr_2D = {.row = 4, .column = 3};//{NULL, 3, 4}
    array_2D * ori_arr = &arr_2D;
    createArray_2D(ori_arr);

    int const numCount = 12;
    int num[numCount] = {0};
    for (int i = 0; i < numCount; i++) {
        num[i] = i + 1;
    }
    assignArray_2D(ori_arr, num, numCount);
    outPutArray_2D(ori_arr);
    array_2D re_arr = reverseArray_2D(ori_arr);
    freeArray_2D(ori_arr);
    outPutArray_2D(&re_arr);
}

char * copyStringFromIndx(char const * str_p, int fromIndex){
    int copyLen = (int)strlen(str_p) - fromIndex;
    char * copiedStr_p = (char *)malloc(sizeof(char) * copyLen);
    for (int i = 0; i < copyLen; i++) {
        *(copiedStr_p + i) = *(str_p + i + fromIndex);
    }
    free(copiedStr_p);
    return copiedStr_p;
}

int checkLeftNumberIntArray(int arr[], int arc, int flag){
    int counter = 0;
    for (int i = 0; i < arc; i++) {
        if (*(arr + i) == flag) {
            counter ++;
        }
    }
    return counter;
}

void moveArrayWithIndex(int *arr, int const arc, int const index){
    int const realIndex = index % arc;
    int * temArr =  (int *)malloc(sizeof(int) * realIndex);
    for (int * a = arr + arc - 1, b = realIndex - 1; a >= arr + realIndex; a--, b --) {
        //save the value of index
        * (temArr + b) = * a;
        //cover the value
        * a = *(a - realIndex);
    }
    for (int i = 0; i < realIndex; i++) {
        *(arr + i) = *(temArr + i);
    }
    free(temArr);
}

void moveArrayWithOne(int arr[], int const arc){
    int a = arr[arc - 1];
    for (int i = arc - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = a;
}


void inputNumbers(int * arr_p, int count){
    for (int i = 0; i < count; i++) {
        printf("Please input %d number, end up with key 'enter'\n", i + 1);
        scanf("%d", arr_p + i);
    }
}

void dealNumbers(int * arr_p, int count){
    int min = *arr_p;
    int max = *arr_p;
    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 0; i < count; i++) {
        int tem = *(arr_p + i);
        if (min > tem) {
            min = tem;
            minIndex = i;
        }
        if (max < tem) {
            max = tem;
            maxIndex = i;
        }
    }
    int tem = *arr_p;
    *arr_p = *(arr_p + minIndex);
    *(arr_p + minIndex) = tem;
    
    tem = *(arr_p + count -1);
    *(arr_p + count -1) = *(arr_p + maxIndex);
    *(arr_p + maxIndex) = tem;
}

void outputNumbers(int * arr_p, int count){
    printf("The array is\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t", *(arr_p + i));
    }
    printf("\n");
}

void exchange(int * num1_p, int * num2_p){
    int temp = * num1_p;
    * num1_p = * num2_p;
    * num2_p = temp;
}

