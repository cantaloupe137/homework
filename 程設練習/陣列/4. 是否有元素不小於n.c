// 求一大小為n的整數陣列中，是否有任一元素之值不小於n？
// 任意元素不小於n ->任意一個元素大於或等於n
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, ans = 0, greater_or_equal_to_n = 0;

    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= n)
        {
            greater_or_equal_to_n = 1;
            break;
        }
    }

    if (greater_or_equal_to_n)
        printf("%s", "yes");
    else
        printf("%s", "no");

    free(arr);

    return 0;
}
