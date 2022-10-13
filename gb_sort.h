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

//折半插入排序
void sort03_InsertSort2(Array* array, myInt len);

//冒泡排序
void sort04_BubbleSort(Array* array, myInt len);

//快速排序
void sort05_QuickSort(Array* array, myInt left, myInt right);

//简单选择排序
void sort06_SelectSort(Array* array, myInt len);


#endif