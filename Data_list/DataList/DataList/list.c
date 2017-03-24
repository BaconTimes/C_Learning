//
//  list.c
//  DataList
//
//  Created by iOSBacon on 2017/2/22.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#include <stdlib.h>
#include <string.h>
#include "list.h"


/* list_init */

void list_init(List * list, void (*destroy)(void * data)) {
    /* Initialize the list */
    
    list->size = 0;
    list->destroy = destroy;
    list->head = NULL;
    list->tail = NULL;
    return;
}

/* list_destroy */
void list_destroy(List * list) {
    void * data;
    /*Remove each element. */
    while (list_size(list) > 0) {
        /* 移除节点成功，并且析构函数不为空 */
        if (list_rem_next(list, NULL, (void **)&data) == 0 && list->destroy != NULL) {
            /* Call a user-defined function to free dynamically allocated data. */
            list->destroy(data);
        }
    }
    /* No operations are allowed now, but clear the structure as a precaution */
    /*
     void *memset(void *s, int ch, size_t n);
     函数解释：将s中当前位置后面的n个字节 （typedef unsigned int size_t ）用 ch 替换并返回 s 。
     memset：作用是在一段内存块中填充某个给定的值，它是对较大的结构体或数组进行清零操作的一种最快方法
     */
    memset(list, 0, sizeof(List));
    return;
}

/* list_ins_next */
int list_ins_next(List *list, ListElmt *element, const void * data) {
    ListElmt * new_element;
    /* Allocated storage for the element. */
    if ((new_element = (ListElmt *)malloc(sizeof(ListElmt))) == NULL) {
        return -1;
    }
    
    /* Insert the element into the list. */
    new_element->data = (void*)data;
    /* 如果前一节点为空，表示向表头插入 */
    if (element == NULL) {
        /* Handle insertion at the head of the list. */
        
        /* 如果表的size为0，表示为空表，将表尾指向该节点 */
        if (list_size(list) == 0)
            list->tail = new_element;
        // 让新节点指向下一个节点（向表头插入新节点，现有表头成为第二个节点）
        new_element->next = list->head;
        // 将新节点设为表头
        list->head = new_element;
    }
    else {
        /* Handle insertion somewhere other than at the head. */
        // 如果下一个节点如果为NULL，说明向表尾插入新节点，将表尾指针指向新节点
        if (element->next == NULL)
            list->tail = new_element;
        
        // 不管element是否是表尾
        // 将element指向的下一个节点的指针赋给新节点的下一个节点的指着
        new_element->next = element->next; //此时新节点已经指向旧节点的下一个节点了
        // 将旧节点的next指向新节点
        element->next = new_element; //此时插入操作完成
    }
    /* Adjust the size of the list to account for the inserted element.  */
    // 表的size加1
    list->size++;
    return 0;
}

/* list_rem_next */
int list_rem_next(List *list, ListElmt *element, void ** data) {
    ListElmt * old_element;
    
    /* Do not allow removal from an empty list. */
    if (list_size(list) == 0) {
        return -1;
    }
    
    /* Remove the element from the list. */
    if (element == NULL) //element为空，说明是移除表头节点
    {
        /* Handle removal from the head of the list */
        // 将表头的数据指针指向 参数的数据指针
        *data = list->head->data;
        // 让旧节点的指针指向表头，也就是要移除的节点
        old_element = list->head;
        // 让表头指向旧节点的下一个节点
        list->head = list->head->next; //此时表头已为原表的第二个节点，并指向原表的第三个节点
        if (list_size(list) == 1) //如果原表的size为1，移除该节点后，该表为空表，所以表尾置空
            list->tail = NULL;
    } else {
        /* handle removal from somewhere other than the head. */
        if (element->next == NULL) {
            return -1;
        }
        // 将要移除的节点的数据赋给 参数的数据指针
        *data = element->next->data;
        //旧节点指向 要移除的节点
        old_element = element->next;
        // 旧节点移除，当前节点指向当前节点的下一个节点的下一个节点
        element->next = element->next->next; //在 此操作之前旧节点还在表中，在此操作后，旧节点没有被其他节点指向，但是旧节点仍旧指向原表的第三个节点，即新表的第二个节点
        // 新表的element的next如果为NULL，说明element即为表尾
        if (element->next == NULL)
            list->tail = element;
        
    }
    
    /* Free the storage allocated by the abstract datatype. */
    free(old_element);
    
    /* Adjust the size of the list to account for the removed element. */
    list->size--;
    return 0;
}
