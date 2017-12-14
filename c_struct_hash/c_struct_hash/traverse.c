//
//  traverse.c
//  c_struct_hash
//
//  Created by iOSBacon on 2017/11/29.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#include "traverse.h"
#include "list.h"
#include "bitree.h"

int preorder_o(const BiTreeNode *node, List *list)
{
    if (!bitree_is_eob(node)) {
        if (list_ins_next(list, list_tail(list), bitree_data(node)) != 0) {
            return -1;
        }
        if (!bitree_is_eob(bitree_left(node)))
            if (preorder_o(bitree_left(node), list) != 0)
                return -1;
        if (!bitree_is_eob(bitree_right(node)))
            if (preorder_o(bitree_right(node), list) != 0)
                return -1;
    }
    return 0;
}

int inorder(const BiTreeNode *node, List *list)
{
    if (!bitree_is_eob(node)) {
        if (!bitree_is_eob(bitree_left(node)))
            if (inorder(bitree_left(node), list) != 0)
                return -1;
        if (list_ins_next(list, list_tail(list), bitree_data(node)))
            return -1;
        if (!bitree_is_eob(bitree_right(node)))
            if (inorder(bitree_right(node), list) != 0)
                return -1;
    }
    return 0;
}

int postorder_o(const BiTreeNode *node, List *list)
{
    if (!bitree_is_eob(node)) {
        if (!bitree_is_eob(bitree_left(node)))
            if (postorder_o(bitree_left(node), list) != 0)
                return -1;
        if (!bitree_is_eob(bitree_right(node)))
            if (postorder_o(bitree_right(node), list) != 0)
                return -1;
        
        if (list_ins_next(list, list_tail(list), bitree_data(node)) != 0)
            return -1;
    }
    return 0;
}










