//
//  stack.h
//  DataList
//
//  Created by iOSBacon on 2017/3/23.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#ifndef stack_h
#define stack_h

#include <stdio.h>
#include "list.h"
#include <stdlib.h>


/* Implement stacks as linked lists. */
typedef List Stack;

/* Public Interface */

#define stack_init list_init
#define stack_destroy list_destroy

int stack_push(Stack * stack, const void * data);
int stack_pop(Stack * stack,   void ** data);
#define stack_peek(stack) ((stack)->head == NULL ? NULL : (stack)->head->data)
#define stack_size list_size

#endif /* stack_h */
