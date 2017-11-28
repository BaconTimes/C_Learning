//
//  main.c
//  csocket
//
//  Created by iOSBacon on 2017/10/21.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#include <stdio.h>
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
        "你为什么这么帅\r\n",
        "有没有人夸过你帅？",
        "傻逼牛头，笨鳖",
        "牛，你是第六人吗？",
        "拔插座了吧"
    };
    
    int listener_d = socket(PF_INET, SOCK_STREAM, 0);
    if (listener_d == -1) {
        error("不能打开套接字");
    }
    
    struct sockaddr_in name;
    name.sin_family = PF_INET;
    name.sin_port = (in_port_t)htons(33123);
    name.sin_addr.s_addr = htonl(INADDR_ANY);
    int c = bind(listener_d, (struct sockaddr *)&name, sizeof(name));
    if (c == -1) {
        error("无法绑定端口");
    }
    
    if (listen(listener_d, 10) == -1) {
        error("无法监听");
    }
    puts("等待链接...");
    
    while (1) {
        struct sockaddr_storage client_addr;
        unsigned int address_size = sizeof(client_addr);
        int connect_d = accept(listener_d, (struct sockaddr *)&client_addr, &address_size);
        if (connect_d == -1) {
            error("无法打开副套接字");
        }
        
        char *msg = advice[rand() % 5];
        if (send(connect_d, msg, strlen(msg), 0) == -1) {
            error("send");
        }
        
        if (close(connect_d) == -1) {
            error("无法关闭链接");
        }
    }
    
    return 0;
}


















