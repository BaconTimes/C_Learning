//
//  FunctionFile.h
//  2_22_16_17
//
//  Created by iOSBacon on 16/4/19.
//  Copyright © 2016年 iOSBacon. All rights reserved.
//

#ifndef FunctionFile_h
#define FunctionFile_h

#include "myDefine.h"
#include <stdio.h>

/*!
 *  @brief 交换a与b的值
 *  @param a
 *  @param b
 */
void exchangValue(int * a, int * b);

/*!
 *  @brief 求a与b的最大公约数
 *  @param a
 *  @param b
 *  @return 最大公约数
 */
int biggestDivisor(int a, int b);

/*!
 *  @brief n!
 *  @param number value of n
 *  @return n!
 */
int nNumber(int number);

/*!
 *  @brief 自己看代码
 */
void createArray_2D(array_2D * O_o);

/*!
 *  @brief 自己看代码
 */
void freeArray_2D(array_2D * o_O);

void assignArray_2D(array_2D * O_o, int * p, int totalCount);

void outPutArray_2D(array_2D * o_o);

array_2D * reverseArray_2D(array_2D * o_o);

#endif /* FunctionFile_h */
