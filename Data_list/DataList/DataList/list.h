//
//  list.h
//  DataList
//
//  Created by iOSBacon on 2017/2/22.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

/*!
 @brief 单向链表
 */
#ifndef list_h
#define list_h

#include <stdio.h>
#include <stdlib.h>

/*Define a structure for linked list elements. */

typedef struct ListElmt_
{
    void * data;
    struct ListElmt_ * next;
} ListElmt;

/* Define a structure for linked lists */

typedef struct List_
{
    int size; // 链表的size
    int (*match)(const void * key1, const void * key2);
    void (*destroy)(void * data); //析构函数
    ListElmt * head; //链表头
    ListElmt * tail; //链表尾
} List;

/* Public Interface */

/**
 @brief 初始化链表
 @param list 链表结构体指针
 @param destroy 链表数据的析构函数指针
 */
void list_init(List * list, void (*destroy)(void * data));

/**
 @brief 销毁链表
 @param list 链表结构体指针
 */
void list_destroy(List * list);

/**
 @brief 向链表中element后一位插入一个节点
 @param list 链表结构体指针
 @param element 要插入节点的前一节点
 @param data 将要插入节点的数据
 */
int list_ins_next(List *list, ListElmt *element, const void * data);

/**
 @brief 移除链表中element后一位节点
 @param list 链表结构体指针
 @param element 要移除的节点的前一节点
 @param data 要移除的节点的数据的指针的指针
 */
int list_rem_next(List *list, ListElmt *element, void ** data);

#define list_size(list) ((list)->size)

#define list_head(list) ((list)->head)
#define list_tail(list) ((list)->tail)
#define list_is_head(list, element) ((element) == (list)->head ? 1 : 0)
#define list_is_tail(element) ((element)->next == NULL ? 1 : 0)
#define list_data(element) ((element)->data)
#define list_next(element) ((element)->next)

#endif /* list_h */
