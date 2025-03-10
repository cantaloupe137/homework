// 將一大小為n的字元陣列反轉。
#include <stdio.h>
#include <stdlib.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int n = 0;
    scanf("%d", &n);
    getchar(); // 清掉換行
    char *arr = (char *)malloc(n * sizeof(char));

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &arr[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        swap(&arr[i], &arr[n - 1 - i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%c", arr[i]);
    }

    free(arr);
    return 0;
}
