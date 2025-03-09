// 求一大小為n的整數陣列中，所有元素之和。
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, ans = 0;
    int *arr = (int *)malloc(n * sizeof(int));
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        ans += arr[i];
    }
    printf("%d", ans);
    free(arr);

    return 0;
}
