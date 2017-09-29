//
//  dlist.h
//  DataStructureLearning
//
//  Created by iOSBacon on 2017/8/29.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#ifndef dlist_h
#define dlist_h

#include <stdio.h>

typedef struct DListElmt_{
    void *data;
    struct DListElmt_ *prev;
    struct DListElmt_ *next;
}DListElmt;

typedef struct DList_ {
    int size;
    int (*match)(const  void *key1, const void *key2);
    void (*destroy)(void *data);
    DListElmt *head;
    DListElmt *tail;
}Dlist;

void dlist_init(Dlist *list, void(*destroy)(void *data));
void dlist_destroy(Dlist *list);
int dlist_ins_next(Dlist *list, DListElmt *element, const void *data);
int dlist_ins_prev(Dlist *list, DListElmt *element, const void *data);
int dlist_remove(Dlist * list, DListElmt *element, void **data);
#define dlist_size(list) ((list)->size)
#define dlist_head(list) ((list)->head)
#define dlist_tail(list) ((list)->tail)
#define dlist_is_head(element) ((element)->prev == NULL ? 1 : 0)
#define dlist_is_tail(element) ((element)->next == NULL ? 1 : 0)
#define dlist_data(element) ((element)->data)
#define dlist_next(element) ((element)->next)
#define dlist_prev(element) ((element)->prev)

#endif /* dlist_h */
