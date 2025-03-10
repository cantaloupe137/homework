// 求一大小為n的整數陣列中第二大的數？
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 0;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int biggest = arr[0], second = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > biggest)
        {
            second = biggest;
            biggest = arr[i];
        }
        if (arr[i] < biggest && arr[i] > second)
            second = arr[i];
    }
    printf("%d", second);
    free(arr);
    return 0;
}
