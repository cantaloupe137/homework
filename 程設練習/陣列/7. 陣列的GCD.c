// 求一大小為n的自然數陣列，所有元素之最大公因數。
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

int GCD_In_Arr(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    return GCD(arr[0], GCD_In_Arr(arr + 1, n - 1));
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

    ans = GCD_In_Arr(arr, n);
    printf("%d", ans);

    free(arr);

    return 0;
}
