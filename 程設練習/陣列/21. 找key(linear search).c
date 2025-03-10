// 在一個未排序、大小為n的整數陣列中，尋找到一個特定的元素key。
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int n = 0, key = 0;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    bool find = false;
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            index = i;
            find = true;
            break;
        }
    }

    if (find)
        printf("The key %d is found at index %d.", key, index);
    else
        printf("There is no such key %d found in this array.", key);

    return 0;
}
