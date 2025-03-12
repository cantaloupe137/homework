// 求一大小為n的整數陣列中最小的數？
#include <stdio.h>
#include <stdlib.h>

int smallestNumInArr(int *arr, int n)
{
    int small = *arr;
    for (int i = 0; i < n; i++)
    {
        if (small > *(arr + i))
        {
            small = *(arr + i);
        }
    }
    return small;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
    printf("%d", smallestNumInArr(arr, n));
    free(arr);
    return 0;
}
