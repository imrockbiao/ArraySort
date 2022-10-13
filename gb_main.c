#include"gb_main.h"

int main()
{
    Array array[LEN];
    int len = LEN;    

    sort00_initArray(array);//初始化

    //sort02_InsertSort(array, len);//插入排序
    //sort03_InsertSort2(array, len);//折半插入排序
    //sort04_BubbleSort(array, len); //冒泡排序
    //sort05_QuickSort(array, 0, len-1); //快速排序
    //sort06_SelectSort(array, len); //简单选择排序

    sort01_printArray(array, len);//数据输出

    printf("main function over\n");
    return 0;
}