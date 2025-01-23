#include <stdio.h>
int main()
{
    int a[15], i, n, key, flag;
    printf("\nEnter total no. of entries : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter a number : ");
        scanf("%d", &a[i]);
    }
    printf("\nEnter element to be searched : ");
    scanf("%d", &key);
    flag = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("\nFound!!");
    else
        printf("\nNot found!!");
    return 0;
}