// 求一大小為n的整數陣列中，有多少元素為偶數？
#include <stdio.h>
#include <stdlib.h>

int countEven(int n)
{
    int count = 0;
    if (n % 2 == 0)
        count++;
    return count;
}

int main()
{

    int n = 0, ans = 0;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        ans += countEven(arr[i]);
    }

    printf("%d", ans);
    free(arr);
    return 0;
}
