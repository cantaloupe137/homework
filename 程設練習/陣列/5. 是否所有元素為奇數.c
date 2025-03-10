// 求一大小為n的整數陣列中，是否所有元素皆為奇數？
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isOdd(int n)
{
    if (n % 2 == 0)
        return false;
    return true;
}

int main()
{
    int n = 0, ans = 0;
    bool AllOdd = true;

    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        AllOdd = (isOdd(arr[i]));
        if (AllOdd == false)
            break;
    }

    if (AllOdd)
        printf("%s", "yes");
    else
        printf("%s", "no");
    free(arr);

    return 0;
}
