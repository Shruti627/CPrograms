#include <stdio.h>
int main()
{
    int a[10], i, n;
    printf("\nEnter no. of elements : ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nBefore sorting : ");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    printf("\nAfter sorting : ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("\t%d", a[i]);
    }

    return 0;
}