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

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        char* time = (char *)malloc(10240 * sizeof(char));
//        scanf("%s",time);
        unsigned long strlength = strlen(time);
        printf("%d", atoi(time));
        char c[100] = {};
        sprintf(c, "%.4d",1223);
        printf("%s\n", c);
        if (time[strlength - 2] == 'P') {
            
        }
    }
    return 0;
}

