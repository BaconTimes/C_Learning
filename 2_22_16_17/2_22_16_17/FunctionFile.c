//
//  FunctionFile.c
//  2_22_16_17
//
//  Created by iOSBacon on 16/4/19.
//  Copyright © 2016年 iOSBacon. All rights reserved.
//

#include "FunctionFile.h"
#include "stdlib.h"

/*!
 *  @brief create a two-dimension array
 *  @param column
 *  @param row
 *  @return a two-dimension array
 */
int ** createArray(int column, int row);

/*!
 *  @brief free a two-dimension array
 *  @param p_q the point of array
 *  @param row the row of array
 */
void freeArray(int ** p_q, int row);


int biggestDivisor(int a, int b){
    while (a % b != 0) {
        int plu = a % b;
        a = b;
        b = plu;
    }
    return b;
}

void exchangValue(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int nNumber(int number){
    if (number == 1) {
        return number;
    }else{
        return nNumber(number - 1) * number;
    }
}

void assignArray_2D(array_2D * O_o, int * p, int totalCount){
    int index = 0;
    for (int i = 0; i < O_o->row; i++) {
        for (int j = 0; j < O_o->column; j++) {
            if (index >= totalCount) {
                return;
            }
            *(*(O_o->p_q+i) + j) = *(p+index);
            index++;
        }
    }
}

void createArray_2D(array_2D * O_o){
    if (O_o == NULL) {
    }
    O_o->p_q = createArray(O_o->column,O_o->row);
}

void freeArray_2D(array_2D * o_O){
    freeArray(o_O->p_q, o_O->row);
}

array_2D reverseArray_2D(array_2D * o_o){
    array_2D tmp_s = {.row = o_o->column,.column = o_o->row};
    array_2D * tmp_p = &tmp_s;
    createArray_2D(tmp_p);
    for (int i = 0; i < o_o->row; i++) {
        for (int j = 0; j < o_o->column; j++) {
            (*(*(tmp_p->p_q + j) + i)) = (*(*(o_o->p_q + i) +j));
        }
    }
    outPutArray_2D(tmp_p);
    return tmp_s;
}

void outPutArray_2D(array_2D * o_o){
    for (int i = 0; i < (o_o->row); i++) {
        for (int j = 0; j < (o_o->column); j++) {
            printf("%2d\t", *(*(o_o->p_q+i) + j));
        }
        printf("\n");
    }
}

int ** createArray(int column, int row){
    int ** tmp_p_p = malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++) {
        *(tmp_p_p + i) = malloc(column * sizeof(int));
    }
    return tmp_p_p;
}

void freeArray(int ** p_q, int row){
    for (int o_o = 0; o_o < row; o_o ++) {
        free(*(p_q + o_o));
    }
    free(p_q);
}