#ifndef _GB_DATA_H
#define _GB_DATA_H

#define T 1 //表真
#define F 0 //表假

typedef int Flag;
typedef int myInt; //自定义数据类型

typedef int ElemType; //数组中元素类型
typedef int Index; //数组下标

typedef struct 
{
    ElemType e;//元素
    Index id;//下标
}Array;

#endif