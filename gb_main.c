#include"gb_main.h"

int main()
{
    Array array[LEN];
    int len = LEN;
    
    sort00_initArray(array);
    sort02_InsertSort(array, len);
    sort01_printArray(array, len);

    return 0;
}