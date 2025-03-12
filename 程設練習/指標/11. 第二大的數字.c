// 求一大小為n的整數陣列中第二大的數的位置？
#include <stdio.h>
#include <stdlib.h>

int second_biggest(int *arr, int n)
{
    int biggest = *arr, second = *arr;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) > biggest)
        {
            second = biggest;
            biggest = *(arr + i);
        }
        else if (*(arr + i) > second && *(arr + i) < biggest)
        {
            second = *(arr + i);
        }
    }
    return second;
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
    printf("%d", second_biggest(arr, n));
    free(arr);
    return 0;
}
