// 求一大小為n的整數陣列中最小的數？
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
    int smallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("%d", smallest);
    free(arr);
    return 0;
}
