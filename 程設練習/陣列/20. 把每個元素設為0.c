// 將一大小為n的bool陣列的所有元素設為true。
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int n = 0;
    scanf("%d", &n);

    bool *arr = (bool *)malloc(n * sizeof(bool));

    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[i] = (temp != 0);
        //如果temp是0 -> false, 不是的話 -> false
        arr[i] = true; //全部設為0
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i])
            printf("%s", "true ");
        else
            printf("%s", "false ");
    }

    return 0;
}
