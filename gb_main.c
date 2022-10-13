#include"gb_main.h"

int main()
{
    Array array[LEN];
    int len = LEN;    

    sort00_initArray(array);//初始化

    //sort02_InsertSort(array, len);//插入排序
    sort03_InsertSort2(array, len);



    sort01_printArray(array, len);//输出

    printf("main function over\n");
    return 0;
}