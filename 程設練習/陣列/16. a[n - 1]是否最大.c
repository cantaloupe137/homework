// 求一大小為n的整數陣列中，最後一個元素之值是否為其中之最大值？
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int n = 0;
    bool last_isBiggest = true;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int prev = arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        if (prev <= arr[i])
        {
            last_isBiggest = false;
            break;
        }
    }

    if (last_isBiggest)
        printf("%s", "yes");
    else
        printf("%s", "no");
    free(arr);
    return 0;
}
