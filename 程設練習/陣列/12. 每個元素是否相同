// 求一大小為n的整數陣列中，所有元素之值是否皆為相同？
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int n = 0;
    bool allTheSame = true;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int before = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (before != arr[i])
        {
            allTheSame = false;
            break;
        }
    }

    if (allTheSame)
        printf("%s", "yes");
    else
        printf("%s", "no");

    free(arr);
    return 0;
}
