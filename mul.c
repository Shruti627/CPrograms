#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], i, j, k, r1, r2, c1, c2, mul[10][10] = {0};
    printf("\nEnter r1 :");
    scanf("%d", &r1);
    printf("\nEnter c1: ");
    scanf("%d", &c1);
    
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("\nEnter r2 :");
    scanf("%d", &r2);
    printf("\nEnter c2: ");
    scanf("%d", &c2);
    
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);


    if (c1 == r2) {
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                mul[i][j] = 0;
            }
        }


        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                for (k = 0; k < c1; k++) {
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        }


        printf("\nMultiplication \n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMatrix multiplication is not possible!");

    return 0;
}
}
