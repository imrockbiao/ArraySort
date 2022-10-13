#ifndef _GB_DATA_H
#define _GB_DATA_H

typedef int myInt; //自定义数据类型

typedef int ElemType; //数组中元素类型
typedef int Index; //数组下标

typedef struct 
{
    ElemType e;//元素
    Index id;//下标
}Array;

#endif