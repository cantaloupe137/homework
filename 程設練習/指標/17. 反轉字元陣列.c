// 將一大小為n的字元陣列反轉。
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
    char *arr = (char *)malloc(n * sizeof(char));
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", (arr + i)); // 這個空格很重要
    }

    for (int i = 0; i < n / 2; i++)
    {
        swap((arr + i), (arr + n - i - 1));
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c", *(arr + i));
    }
    return 0;
}
