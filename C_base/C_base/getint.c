//
//  getint.c
//  C_base
//
//  Created by iOSBacon on 2017/8/23.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#include "getint.h"
#include <stdlib.h>
#include <string.h>

int fpr(int ** iptr) {
    int a = 10;
    *iptr = &a;
    return 0;
}

int g(int **iptr) {
    if ((*iptr = (int *)malloc(sizeof(int))) == NULL) {
        return -1;
    }
    return 0;
}

int swap2 (void *x, void *y, int size) {
    void *tmp;
    if ((tmp = malloc(size)) == NULL)
        return -1;
    memcpy(tmp, x, size);
    memcpy(x, y, size);
    memcpy(y, tmp, size);
    free(tmp);
    return 0;
}

int recursion_factorial(int number, int sum) {
    if (number == 1) {
        return number * sum;
    } else {
        return recursion_factorial(number - 1, sum * number);
    }
}

int fact(int n) {
    if (n < 0) {
        return 0;
    } else if (n == 0)
        return 1;
    else if (n == 1)
        return 1;
    else
        return n * fact(n-1);
}

int facttail(int n, int a) {
    if (n < 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return facttail(n - 1, n * a);
}

int* simpleNumber(int number) {
    int origin = number;
    printf("origin = %d\n", origin);
    while (number != 0) {
        int i = 2;
        while (1) {
            if (number % i == 0) {
                number /= i;
                printf("%d\n", i);
                break;
            }
            i += 1;
        }
        if (number == 1) {
            break;
        }
    }
    return NULL;
}
