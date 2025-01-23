#include <stdio.h>
int main()
{
    int a[10], n, i;
    int even[10], odd[10];
    printf("\nEnter no. of elements : ");
    scanf("%d", &n);
    printf("\nEnter %d elements : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] & 1)
            a[i] = odd[i];
        else
            a[i] = even[i];
    }
    printf("\nEVEN ARRAY : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\nODD ARRAY : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}