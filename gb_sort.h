#ifndef _SORT_H
#define _SORT_H

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include"gb_data.h"

#define LEN 10

//赋值
void sort00_init(Array* a, Array* b);

//交换元素
void sort00_swap(Array* a, Array* b);

//打印数组
void sort01_printArray(Array* array, myInt len);

//初始化数组
void sort00_initArray(Array* array);

//直接插入排序
void sort02_InsertSort(Array* array, myInt len);


#endif