//
//  C_4_BookPractice.c
//  2_22_16_17
//
//  Created by iOSBacon on 16/4/21.
//  Copyright © 2016年 iOSBacon. All rights reserved.
//

#include "C_4_BookPractice.h"
#include <math.h>

int maxNumberInNumber(int a, int b, int c){
    int max = (a > b)?a:b;
    max = (max >b)?max:b;
    return max;
}

int c4p5LessThan_1000AndSqrt(){
    int a = 0;
    do {
        printf("Please enter a number which is less than 1000 : ");
        scanf("%d", &a);
    } while (!(a > 0 && a < 1000));
    return (int)sqrtf(a);
}

int c4p6NormalFunction(int x){
    if (x < 1) {
        return x;
    } else if(x >= 1 && x <10){
        return 2 * x -1;
    }else{
        return 3 * x - 11;
    }
}

void c4p8LogRankWithScore(){
    int scores = 0;
    
    do {
        printf("Please enter a score:");
        scanf("%d", &scores);
    } while (!(scores >= 0 && scores <= 100));
    
    int grade = scores / 10;
    char rank = '\0';
    switch (grade) {
        case (9 | 10):
            rank = 'A';
            break;
        case 8:
            rank = 'B';
            break;
        case 7:
            rank = 'C';
            break;
        case 6:
            rank = 'D';
            break;
        default:
            rank = 'E';
            break;
    }
    printf("rank = %c\n",rank);
}

/*!
 *  @brief 一个整数的位数
 */
int countNumber(int num){
    printf("function name --- %s\t",__func__);
    int count = 0;
    while (num / 10 != 0) {
        num /= 10;
        count ++;
    }
    count ++;
    printf("count = %d\n",count);
    return count;
}

/*!
 *  @brief 10的n次幂
*/
int expBac(int time){
    int temp = 1;
    if (time == 0) {
        return 1;
    }else{
        while (time > 0) {
            temp *= 10;
            time --;
        }
    }
    return temp;
}

void c4p9InfoWithNumber(){
    int aNum = -1;
    int numCount = 0;
    do {
        printf("Please input a integer number x, 0<x<100000\n");
        scanf("%d",&aNum);
        numCount = countNumber(aNum);
    } while ( numCount > 5);
    
    int leftNum = aNum;
    for (int i = numCount; i > 0; i --) {
        int signInt = leftNum / expBac(i - 1);
        printf("%d\t", signInt);
        leftNum %= expBac(i - 1);
    }
    printf("\n");
    
    int rightNum = aNum;
    for (int i = 1; i <= numCount; i++) {
        int left = rightNum % 10;
        rightNum /= 10;
        printf("%d\t",left);
    }
    printf("\n");
}

void c4p10calBenefit(int income){
    printf("income = %d\n",income);
    double benefit = 0;
    double const level1 = 1e5;
    double const level2 = 2e5;
    double const level3 = 4e5;
    double const level4 = 6e5;
    double const level5 = 1e6;
    double const level1Rate = 0.1;
    double const level2Rate = 0.075;
    double const level3Rate = 0.05;
    double const level4Rate = 0.03;
    double const level5Rate = 0.015;
    double const level6Rate = 0.01;
    if (income > level5) {
        benefit = level1 * level1Rate + (level2 - level1) * level2Rate + (level3 - level2) * level3Rate + (level4 - level3) * level4Rate + (level5 - level4) * level5Rate + (income - level5) * level6Rate;
    }else if(income > level4){
        benefit = level1 * level1Rate + (level2 - level1) * level2Rate + (level3 - level2) * level3Rate + (level4 - level3) * level4Rate + (income - level4) * level5Rate;
    }else if (income > level3){
        benefit = level1 * level1Rate + (level2 - level1) * level2Rate + (level3 - level2) * level3Rate + (income - level3) * level4Rate;
    }else if (income > level2){
        benefit = level1 * level1Rate + (level2 - level1) * level2Rate + (income - level2) * level3Rate;
    }else if(income > level1){
        benefit = level1 * level1Rate + (income - level1) * level2Rate;
    }else{
        benefit = income * level1Rate;
    }
    printf("benefit = %f\n",benefit);
}

void Print(int *num, int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", num[i]);
    puts("\n");
    return;
}
void c4p11sortNumberArray(){
    int numberArr[4] = {4,7,1,3};
//    for (int i = 0; i < 4; i ++) {
//        printf("Please enter %dth number\n",i + 1);
//        scanf("%d",&numberArr[i]);
//    }
    for (int i = 0; i < 4; i ++) {
        printf("%d \t",numberArr[i]);
    }
    int arrayCount = 4;
    for (int i = 0; i < arrayCount; i++) {
        for (int j = 0; j < arrayCount - i - 1; j++) {
            if(numberArr[j] > numberArr[j + 1])
            {
                int temp = numberArr[j];
                numberArr[j] = numberArr[j + 1];
                numberArr[j + 1] = temp;
            }
        }
    }
    puts("\n");
    for (int i = 0; i < 4; i ++) {
        printf("%d \t",numberArr[i]);
    }
}

int isInTowerBac(float centerX, float centerY, float radius, float locationX, float locationY){
    float distance = sqrtf(powf(centerX - locationX, 2) + powf(centerY - locationY, 2));
    
    return (distance <= radius);
}

void c4p11IsInTower(){
    float locationX = 1;
    float locationY = 2;
    
    int const radius = 1;
    int a[4][2] = {0};
    int b[] = {2,2,2,-2,-2,2,-2,-2};
    int index = 0;
    for (int i = 0; i < 4; i ++) {
        for (int j = 0; j < 2; j++) {
            a[i][j] = b[index];
            index ++;
        }
    }
    
    
    _Bool isInTower = 0;
    for (int i = 0; i < 4; i ++) {
        int counter = isInTowerBac(a[i][0], a[i][1], radius, locationX, locationY);
        if (counter) {
            isInTower = 1;
            break;
        }
    }
    float height = 0;
    if (isInTower) {
        height = 10;
        printf("location(%f, %f) height is %f\n", locationX, locationY, height);
    }else{
        height = 0;
        printf("location(%f, %f) height is %f\n", locationX, locationY, height);
    }
}

