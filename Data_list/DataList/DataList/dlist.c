//
//  dlist.c
//  DataList
//
//  Created by iOSBacon on 2017/2/24.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#include "dlist.h"
#include <stdlib.h>
#include <string.h>


/* dlist_init */
void dlist_init(DList *list, void (*destroy)(void * data))
{
    /* Initialize the list */
    list->size = 0;
    list->destroy = destroy;
    list->head = NULL;
    list->tail = NULL;
    return;
}

/* dlist_destroy */
void dlist_destroy(DList *list)
{
    void * data;
    /* Remove each element */
    while (dlist_size(list) > 0) {
        if (dlist_remove(list, dlist_tail(list), (void **)&data) == 0 && list->destroy != NULL) {
            /* Call a user-defined function to free dynamically allocated data. */
            list->destroy(data);
        }
    }
    /* No operations are allowed now, but clear the structure as a precaution. */
    memset(list, 0, sizeof(DList));
    return;
}

/* dlist_ins_next */
int dlist_int_next(DList *list, DListElmt *element, const void *data)
{
    DListElmt * new_element;
    
    /* Do not allow a NULL element unless the list is empty. */
    if (element == NULL && dlist_size(list) != 0) {
        return -1;
    }
    
    /* Allocate storage for the element. */
    if ((new_element = (DListElmt *)malloc(sizeof(DListElmt))) == NULL) {
        return -1;
    }
    
    /* Insert the new element into the list. */
    new_element->data = (void *)data;
    
    if (dlist_size(list) == 0) {
        /* Handle insertion when the list is empty. */
        list->head = new_element;
        list->head->prev = NULL;
        list->head->next = NULL;
        list->tail = new_element;
    } else
    {
        /* Handle insertion when the list is not empty. */
        new_element->next = element->next;
        new_element->prev = element;
        
        if (element->next == NULL) {
            list->tail = new_element;
        } else {
            element->next->prev = new_element;
        }
        element->next = new_element;
    }
    
    /* Adjust the size of the list to account for the inserted element. */
    list->size++;
    return 0;
}
int dlist_int_prev(DList *list, DListElmt *element, const void *data);
int dlist_remove(DList *list, DListElmt *element, void **data);

