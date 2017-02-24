//
//  OC_new_learning.c
//  2_22_16_17
//
//  Created by iOSBacon on 2017/2/20.
//  Copyright © 2017年 iOSBacon. All rights reserved.
//

#include "OC_new_learning.h"

typedef enum {
    kCircle,
    kRectangle,
    kEgg
} ShapeType;

typedef enum {
    kRedColor,
    kGreenColor,
    kBlueColor
} ShapeColor ;

typedef struct {
    int x, y, width, height;
} ShapeRect;

typedef struct {
    ShapeType type;
    ShapeColor fillColor;
    ShapeRect bounds;
} Shape;

int OC_main_fun () {
    void drawShapes (Shape shapes[], int count);
    Shape shapes[3];
    ShapeRect rect0 = {0, 0, 10, 30};
    shapes[0].type = kCircle;
    shapes[0].fillColor = kRedColor;
    shapes[0].bounds = rect0;
    
    ShapeRect rect1 = {30, 40 ,50, 60};
    shapes[1].type = kRectangle;
    shapes[1].fillColor = kGreenColor;
    shapes[1].bounds = rect1;
    
    ShapeRect rect2 = {15, 18, 37, 29};
    shapes[2].type = kEgg;
    shapes[2].fillColor = kBlueColor;
    shapes[2].bounds = rect2;
    drawShapes(shapes, 3);
    return 0;
}

void drawShapes (Shape shapes[], int count) {
    void drawCircle(ShapeRect bounds, ShapeColor fillColor);
    void drawRectangle(ShapeRect bounds, ShapeColor fillColor);
    void drawEgg(ShapeRect bounds, ShapeColor fillColor);
    for (int i = 0; i < count; i++) {
        switch (shapes[i].type) {
            case kCircle:
                drawCircle(shapes[i].bounds, shapes[i].fillColor);
                break;
            case kRectangle:
                drawRectangle(shapes[i].bounds, shapes[i].fillColor);
                break;
            case kEgg:
                drawEgg(shapes[i].bounds, shapes[i].fillColor);
                break;
        }
    }
}

void drawCircle(ShapeRect bounds, ShapeColor fillColor)
{
    char * colorName(ShapeColor colorName);
    printf("drawing a circle at (%d %d %d %d) in %s\n", bounds.x, bounds.y, bounds.width, bounds.height, colorName(fillColor));
}
void drawRectangle(ShapeRect bounds, ShapeColor fillColor)
{
    char * colorName(ShapeColor colorName);
    printf("drawing a rectangle at (%d %d %d %d) in %s\n", bounds.x, bounds.y, bounds.width, bounds.height, colorName(fillColor));
}
void drawEgg(ShapeRect bounds, ShapeColor fillColor)
{
    char * colorName(ShapeColor colorName);
    printf("drawing an egg at (%d %d %d %d) in %s\n", bounds.x, bounds.y, bounds.width, bounds.height, colorName(fillColor));
}

char * colorName(ShapeColor colorName)
{
    switch (colorName) {
        case kRedColor:
            return "red";
            break;
        case kGreenColor:
            return "green";
            break;
        case kBlueColor:
            return "blue";
    }
    return "no clue";
}
