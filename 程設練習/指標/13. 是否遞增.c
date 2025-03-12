// 求一大小為n的整數陣列中，所有元素之值是否為遞增？
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int if_is_increasing(int *arr, int n)
{
    bool check = true;
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i - 1) > *(arr + i))
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
    if (if_is_increasing(arr, n))
        printf("%s", "yes");
    else
        printf("%s", "no");
    free(arr);
    return 0;
}
