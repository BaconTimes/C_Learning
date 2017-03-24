//
//  main.m
//  DataList
//
//  Created by iOSBacon on 2017/2/22.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <string.h>
#import <stdlib.h>

#import "list.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        int max(int, int);
        int (*p)(int, int);
        p = max;
        
        void freeData(void * num);
        List * list = (List *)malloc(sizeof(List));
        list_init(list, &freeData);
        
        for(NSInteger i = 0; i < 20; i++) {
            int * num = (int *)malloc(sizeof(int));
            list_ins_next(list, NULL, num);
        }
        
        
        
    }
    return 0;
}

int max(int x, int y) {
    return x > y? x : y;
}


void freeData(void * num) {
    free(num);
}
