#include <stdio.h>
#include <stdlib.h>

int sum_all_element(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int num = *(arr + i);
        sum += num;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", sum_all_element(arr, n));
    free(arr);
    return 0;
}
