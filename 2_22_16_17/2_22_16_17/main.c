//
//  main.c
//  2_22_16_17
//
//  Created by iOSBacon on 16/2/22.
//  Copyright © 2016年 iOSBacon. All rights reserved.
//

#include "FunctionFile.h"
#include "C_4_BookPractice.h"
#include "C_5_BookPractice.h"
#include "C_6_BookPractice.h"
#include "C_8_BookPractice.h"
#include "suddenPractice.h"
#include "Facttail.h"
#include "OC_new_learning.h"
#include "block_explain.c"

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>

void error(char *msg) {
    fprintf(stderr, "Error: %s %s", msg, strerror(errno));
    exit(1);
}
int main(int argc, const char * argv[]) {
    char *advice[] = {
        "你为什么这么帅！\r\n",
        "有没有人夸过你帅？",
        "傻逼牛头，笨鳖",
        "牛，你是第六人吗？",
        "拔插座了吧"
    };
    
    int listener_d = socket(PF_INET, SOCK_STREAM, 0);
    if (listener_d == -1) {
        error("不能打开套接字");
    }
    return 0;
}

