#include <stdio.h>
int main()
{

    int a[10], i, j, n, printedelement, cnt;
    printf("\nEnter no of elements : ");
    scanf("%d", &n);
    printf("\nEnter %d elements : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printedelement = 0;
        cnt = 0;
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                printedelement = 1;
            }
        }
        if (printedelement == 0)
        {
            for (j = 0; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    cnt++;
                }
            }
            printf("\n%d element occurs %d times ", a[i], cnt);
        }
    }

    return 0;
}