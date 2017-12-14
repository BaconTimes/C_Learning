//
//  main.c
//  c_struct_hash
//
//  Created by iOSBacon on 2017/11/27.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#include <stdio.h>
#include "tools.h"
#include "sort.h"

int main(int argc, const char * argv[]) {
    int a[] = {3, 1, 5, 4, 2};
    int size = sizeof(a)/ sizeof(int);
    printList(a, size);
//    issort(a, size, sizeof(int), compare);
    qksort(a, size, sizeof(int), 0, size - 1, compare);
    printList(a, size);
    return 0;
}


