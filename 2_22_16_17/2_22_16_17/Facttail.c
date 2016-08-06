//
//  Facttail.c
//  2_22_16_17
//
//  Created by iOSBacon on 16/8/3.
//  Copyright © 2016年 iOSBacon. All rights reserved.
//

#include "Facttail.h"

int recurTail(int n, int a){
    if (n < 0) {
        return 0;
    }else if (n == 1){
        return a;
    }else{
        
        return recurTail(n - 1, n * a);
    }
}

void recursiveTail(int n, int * sum){
    if (n <= 0 ) {
        *sum = 0;
    }else if(n == 1){
        
    }else{
        *sum *= n;
        recursiveTail(n - 1, sum);
    }
}