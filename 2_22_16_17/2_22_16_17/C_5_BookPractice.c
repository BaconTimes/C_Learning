//
//  C_5_BookPractice.c
//  2_22_16_17
//
//  Created by iOSBacon on 16/5/6.
//  Copyright © 2016年 iOSBacon. All rights reserved.
//

#include "C_5_BookPractice.h"
#include "myDefine.h"
#include <math.h>

void c5p2piValue(){
    double sum = 0;
    int index = 0;
    do {
        double indexValue = pow(-1, index);
        int bot = index * 2 + 1;
        double tempRes = indexValue / bot;
        if (fabs(tempRes) < 1e-6) {
            break;
        }
        sum += tempRes;
        printf("%.0f/%d\n",indexValue,bot);
        index ++;
    } while (1);
    printf("%f\n",(sum *= 4));
}

void c5p3BiggestDivisor(){
    unsigned int m = 12, tempM = 0;
    unsigned int n = 9, tempN = 0;
    tempM = m;
    tempN = n;
    unsigned int left = tempN;
    while (tempM % tempN != 0) {
        left  = tempM % tempN;
        tempM = tempN;
        tempN = left;
    }
    printf("left = %d\n", left);
    
    int common = m * n / left;
    printf("common = %d\n", common);
}

void c5p4counterNumber(){
    char string[] = "dddsui*&*(&((&*234 2342193b9123rxn183128123748*&*(  (&(<:>{[>.>>'【｛。";
    int spaces = 0;
    int characters = 0;
    int numbers = 0;
    int others = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        char tempChar = string[i];
        if (tempChar == ' ') {
            spaces += 1;
        }else if (((tempChar <= 'Z')&&(tempChar >= 'A'))||((tempChar <= 'z')&&(tempChar >= 'a'))){
            characters += 1;
        }else if(tempChar >= '0' && tempChar <= '9'){
            numbers += 1;
        }else{
            others += 1;
        }
    }
    printf("spaces = %d characters = %d numbers = %d others = %d\n", spaces, characters, numbers, others);
}

int serialSameNumber(int number, int numberCount){
    int sum = 0;
    for (int i = 0; i < numberCount; i++) {
        sum += (number * powf(10, i));
    }
    printf("%d\n",sum);
    return sum;
}

void c5p5Sn_a_aa_aaa(){
    
    int number = 2;
    int counter = 5;
    int sum = 0;
    for (int i = 0; i < counter; i++) {
        sum += serialSameNumber(number, i);
    }
    printf("%d\n", sum);
    
}

void cal_a_aa_aaa(int * sum, int a, int n){
    for (int i = 0; i < 300000000; i++);
    printf("*sum = %d\n",*sum);
    *sum += (a * (int)pow(10, n - 1));
    if (n >= 1)
        cal_a_aa_aaa(sum, a, n - 1);
}

void c5p5Sn_a_aa_aaa_1(){
    int number = 2;
    int counter = 5;
    int sum = 0;
    cal_a_aa_aaa(&sum, number, counter);
    printf("sum = %d\n", sum);
}

unsigned long  calFactorial(unsigned number){
    unsigned long sum = 1;
    while (number >= 1) {
        sum *= number;
        number -= 1;
    }
//    printf("%lu\n",sum);
    return sum;
}

void c5p6Ena(){
    unsigned long sum = 0;
    for (unsigned i = 1; i < 20; i++) {
        sum += calFactorial(i);
    }
    printf("sum = %lu \n",sum);
}

double calAdd(int limitation, int exp){
    double sum = 0;
    for (int i = 1; i <= limitation; i++) {
        sum += pow(i, exp);
    }
    return  sum;
}

void c5p7calAddtions(){
    double sum = calAdd(100, 1) + calAdd(50, 2) + calAdd(10, -1);
    printf("%f, %f, %f, %f", calAdd(100, 1), calAdd(50, 2), calAdd(10, -1), sum);
}

unsigned powInt(unsigned a, unsigned b){
    unsigned sum = 1;
    while (b != 0) {
        sum *= a;
        b--;
    }
    return sum;
}

int isFlowerNumber(int number){
    int a[100];
    for (int i = 0; i < 100; i++) {
        a[i] = -1;
    }
    int allSum = number;
    int index = 0;
    while (number > 0) {
        int temp = number % 10;
        a[index] = temp;
        number /= 10;
        index += 1;
    }
    if (index != 3) {
        return 0;
    }
    int sum = 0;
    for (int i = 0; 1; i++) {
        int tempA = a[i];
        if (tempA == -1) {
            break;
        }else{
            sum += powInt(tempA, 3);
        }
    }
    return (sum == allSum);
}

void c5p8flowerNumber(){
    for (int i = 1; i < 1000; i++) {
        if (isFlowerNumber(i)) {
            printf("%d\n",i);
        }
    }
}

/*!
 *  @brief 是否是质数
 *  @param number 输入的数
 *  @return 是返回1，否返回0
 */
_Bool isPrimeNumber(int number){
    float midNumber = sqrtf(number);
    for (int i = 2; i <= midNumber; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

void c5p9PerfectNumber(){
    for (int i = 1; i <= 1000; i++) {
        
        int innerA[50] = {0};
        int index = 0;
        for (int j = 1; j < i; j ++) {
            if (i % j == 0) {
                innerA[index++] = j;
            }
        }
        int  innerSum = 0;
        for (int i = 0; innerA[i] != 0; i++) {
            innerSum += innerA[i];
        }
        if (innerSum == i) {
            printf("%d\n", i);
        }
    }
}

void c5p10FibonacciNumberSerial(){
    int top = 2;
    int bot = 1;
    double sum = 0;
    for (int i = 0; i < 20; i++) {
        sum += ((double)top / bot);
        printf("%d / %d\n", top, bot);
        int tempTop = top;
        top += bot;
        bot = tempTop;
    }
    printf("sum = %f\n",sum);
}

void c5p11gravityHighest()
{
    double sum = 100, heightest = 100;
    for (int i = 2; i <= 10; i ++) {
        sum += heightest;
        heightest /= 2;
        printf("sum = %f\n",sum);
        printf("heightest = %f\n",heightest);
        printf("\n");
    }
    heightest /= 2;
}


void c5p12monkeyEatPeach()
{
    int days = 9;
    int leftPeach = 1;
    for (int i = days; i >= 1; i--) {
        leftPeach += 1;
        leftPeach *= 2;
        printf("leftPeach = %d in %d day\n",leftPeach,i);
    }
}

void sqrtNumber(int number){
    double xn = number / 2.0;
    double xn1 = 0.5 * (xn + number / xn);
    while (fabs(xn - xn1) >= 1e-5) {
        xn = xn1;
        xn1 = 0.5 * (xn + number / xn);
    }
    printf("%f\n",xn);
}

//double sqrtIteration(double xn, double xn1, double number){
//    if (fabs(xn - xn1) < 1e-5) {
//        return xn1;
//    }else{
//        xn = xn1;
//        xn1 = 0.5 * (xn + number / xn);
//        return sqrtIteration(xn, xn1, number);
//    }
//}

double sqrtIteration(double xn, double number){
    double xn1 = 0.5 * (xn + number / xn);
    if (fabs(xn - xn1) < 1e-5) {
        return xn1;
    }else{
        xn = xn1;
        xn1 = 0.5 * (xn + number / xn);
        return sqrtIteration(xn1, number);
    }
}

double sqrtDoubleNumber(double number){
    return sqrtIteration(number, number);
}

void c5p13sqrt(){
    printf("%f\n",sqrtDoubleNumber(16.1));
}

void c5p16printStar(){
    int const rank = 8;
    int const cycleTime = rank * 2 - 1 + (rank - 1) * 2;
    int spaceCount = rank - 1;
    int starCount = 1;
    for (int i = 0; i < cycleTime; i++) {
        if (i % 2 == 0) {
                for (int j = 0; j < spaceCount; j++) {
                    printf(" ");
                }
                for (int j = 0; j < starCount; j++) {
                    printf("*");
                }
                printf("\n");
            if (i < (cycleTime - 1) / 2) {
                spaceCount --;
                starCount += 2;
            }else{
                spaceCount ++;
                starCount -= 2;
            }
        }else{
            printf("\n");
        }
    }
}

