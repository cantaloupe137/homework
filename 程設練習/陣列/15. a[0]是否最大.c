// 求一大小為n的整數陣列中，第0個元素之值是否為其中之最大值？
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int n = 0;
    bool isBiggest = true;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[0] < arr[i])
        {
            isBiggest = false;
            break;
        }
    }

    if (isBiggest)
        printf("%s", "yes");
    else
        printf("%s", "no");
    free(arr);
    return 0;
}
