// 求一大小為n的整數陣列中，所有元素之值是否皆為相同？
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int if_all_the_same(int *arr, int n)
{
    bool check = true;
    for (int i = 1; i < n; i++)
    {
        if (*arr != *(arr + i))
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
    if (if_all_the_same(arr, n))
        printf("%s", "yes");
    else
        printf("%s", "no");
    return 0;
}
