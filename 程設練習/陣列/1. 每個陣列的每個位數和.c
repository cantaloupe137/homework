// 求一大小為n的整數陣列中，所有元素的所有位數的和。
#include <stdio.h>
#include <stdlib.h>

int sumAllDigit(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n = 0, ans = 0;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        ans += sumAllDigit(arr[i]);
    }
    printf("%d", ans);
    free(arr);
    return 0;
}
