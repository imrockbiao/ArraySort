#include"gb_sort.h"

//交换元素， 交换两个元素的内容
void sort00_swap(Array* a, Array* b)
{
    Array t;
    t.e = a->e;
    t.id = a->id;

    a->e = b->e;
    a->id = b->id;

    b->e = t.e;
    b->id = t.id;

}

//初始化数组
void sort00_initArray(Array* array)
{
    printf("init array...\n");
    srand((unsigned)time(NULL));

    for(myInt i = 0; i<LEN; i++)
    {
        array[i].e = rand()%10 +1;//1-10之间的随机数
        array[i].id = i;
    }
    sort01_printArray(array, LEN);
}

//打印数组
void sort01_printArray(Array* array, myInt len)
{
    printf("print array:\n");
    for(myInt i = 0; i<len; i++)
    {
        printf("%d ", array[i].e);
    }
    printf("\nover \n");
}


//赋值, 把b的元素，给a赋值
void sort00_init(Array* a, Array* b)
{
    a->e = b->e;
    a->id = b->id;
}

//直接插入排序
void sort02_InsertSort(Array* array, myInt len)
{
    printf("Begin InsertSort...\n");
    myInt i, j;
    Array t; //临时缓存变量， 空间复杂度位O(1)
    for(i = 1; i<len; i++)
    {
        if(array[i].e < array[i-1].e)
        {
            sort00_init(&t, &array[i]);//缓存元素
            for(j = i-1; t.e<array[j].e; j--)
            {
                sort00_init(&array[j+1], &array[j]);
            }
            sort00_init(&array[j+1], &t);            
        }
    }
    printf("InsertSort over...\n");
}