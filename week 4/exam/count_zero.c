#include <stdio.h>

void count_before_zero(int a[], int n, int *count)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            (*count)++;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    count_before_zero(a, n, &count);
    printf("%d", count);
    return 0;
}
