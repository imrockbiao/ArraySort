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
    printf("Init Array...\n");
    srand((unsigned)time(NULL));

    for(myInt i = 0; i<LEN; i++)
    {
        array[i].e = rand()%100 +1;//1-100之间的随机数
        array[i].id = i;
    }
    sort01_printArray(array, LEN);
    printf("The array has Inited...\n");
}

//打印数组
void sort01_printArray(Array* array, myInt len)
{
    printf("print array:\n");
    for(myInt i = 0; i<len; i++)
    {
        printf("%d ", array[i].e);
    }
    printf("\nprint over \n");
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
    printf("InsertSort Start...\n");
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


//折半插入排序
void sort03_InsertSort2(Array* array, myInt len)
{
    printf("InsertSort2 Start...\n");
    myInt i, low, high, mid, j;
    Array t;
    for(i = 1; i<len; i++)
    {
        low = 0; high = i-1;
        sort00_init(&t, &array[i]);//缓存
        while (low <= high)
        {
            mid = (low + high)/2;
            if(array[mid].e>t.e)
            {
                high = mid-1;
            }
            else
                low = mid + 1;
        }
        for(j = i-1; j>=high; j--)
        {
            sort00_init(&array[j+1], &array[j]);
        }
        sort00_init(&array[high+1], &t);
        
    }
    printf("InsertSort2 over...\n");
}



//冒泡排序
void sort04_BubbleSort(Array* array, myInt len)
{
    printf("BubbleSort Start...\n");
    myInt i, j;
    Flag flag;
    for(i = 0; i<len-1; i++)
    {
        flag = F;
        for(j = len-1; j>i; j--)
        {
            if(array[j-1].e > array[j].e)
            {
                sort00_swap(&array[j-1], &array[j]);
                flag = T;//如果进入交换说明数据仍然无序
            }
            
        }
        if(flag == F)
        {//交换标志没有改变， 说明数据已经有序， 无序再进行比较
            return;
        }
    }
    printf("BubbleSort End...\n");
}


//快速排序
void sort05_QuickSort(Array* array, myInt left, myInt right)
{
    printf("QuickSort Start...\n");
    if(left > right)
        return;
    
    myInt l = left;
    myInt r = right;
    Array pivot;
    sort00_init(&pivot, &array[l]);

    while (l<r)
    {
        while(l<r && array[r].e>=pivot.e)
        {
            r--;
        }
        if(l<r)
        {
            sort00_init(&array[l], &array[r]);
        }
        while(l<r && array[l].e<=pivot.e)
        {
            l++;
        }
        if(l<r)
        {
            sort00_init(&array[r], &array[l]);
        }
        if(l>=r)//最终l是等于r的
        {
            sort00_init(&array[l], &pivot);
        }
    }
    sort05_QuickSort(array, left, r-1); 
    sort05_QuickSort(array, l+1, right); 

    printf("QuickSort End...\n");
}

