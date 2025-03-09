// 求一大小為n的整數陣列中，是否有任一元素之值大於3？
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, ans = 0, greater_then_three = 1;
    int *arr = (int *)malloc(n * sizeof(int));
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 3)
        {
            greater_then_three = 0;
            break;
        }
    }
    if (greater_then_three)
        printf("%s", "yes");
    else
        printf("%s", "no");

    free(arr);

    return 0;
}
