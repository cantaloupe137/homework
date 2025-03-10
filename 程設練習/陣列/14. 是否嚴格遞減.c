// 求一大小為n的整數陣列中，所有元素之值是否為嚴格遞減？
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int n = 0;
    bool strict_decreasing = true;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] <= arr[i])
        {
            strict_decreasing = false;
            break;
        }
    }

    if (strict_decreasing)
        printf("%s", "yes");
    else
        printf("%s", "no");
    free(arr);
    return 0;
}
