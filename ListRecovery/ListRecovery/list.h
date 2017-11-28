//
//  list.h
//  ListRecovery
//
//  Created by iOSBacon on 2017/10/31.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#ifndef list_h
#define list_h

#include <stdio.h>
typedef struct ListElmt_ {
    void *data;
    struct ListElmt_ * next;
} ListElmt;

typedef struct List_ {
    int size;
    int (*match)(const void *key1, const void *key2);
    void (*destroy)(void *data);
    ListElmt * head;
    ListElmt * tail;
} List;

void list_init(List *list, void (*destroy)(void *data));
void list_destroy(List *list);
int list_ins_next(List *list, ListElmt *element, const void *data);
int list_rem_next(List *list, ListElmt *element, void **data);
#define list_size(list) ((list)->size)
#define list_head(list) ((list)->head)
#define list_is_head(list, element) ((element) == (list)->head ? 1 : 0)
#define list_is_tail(element) ((element)->next == NULL ? 1 : 0)
#define list_data(element) ((element)->data)
#define list_next(element) ((element)->next)

#endif /* list_h */
