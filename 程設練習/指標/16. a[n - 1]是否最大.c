// 求一大小為n的整數陣列中，最後一個元素之值是否為其中之最大值？
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int if_last_is_biggest(int *arr, int n)
{
    bool check = true;
    int biggest = *(arr + n - 1);
    for (int i = 0; i < n; i++)
    {
        if (biggest < *(arr + i))
        {
            check = false;
            break;
        }
    }
    if (check)
        return true;
    return false;
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
    if (if_last_is_biggest(arr, n))
        printf("%s", "yes");
    else
        printf("%s", "no");
    return 0;
}
