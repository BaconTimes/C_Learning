//
//  chtbl.h
//  c_struct_hash
//
//  Created by iOSBacon on 2017/11/27.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#ifndef chtbl_h
#define chtbl_h

#include "list.h"

typedef struct CHTbl_ {
    int buckets;
    int (*h)(const void *key);
    int (*match)(const void *key1, const void *key2);
    void (*destroy)(void *data);
    
    int size;
    List *table;
} CHTbl;

int chtbl_init(CHTbl *htbl, int buckets, int (*h)(const void *key), int (*match)(const void *key1, const void *key2), void(*destroy)(void *data));

void chtbl_destroy(CHTbl *htbl);

int chtbl_insert(CHTbl *htbl, const void *data);

int chtbl_remove(CHTbl *htbl, void **data);

int chtbl_lookup(const CHTbl *htbl, void **data);

#define chtbl_size(htbl) ((htbl)->size)

#endif /* chtbl_h */
