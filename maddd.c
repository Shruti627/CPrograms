#include <stdio.h>

int main() {
    int a[10][10], b[10][10], add[10][10];
    int r1, c1, r2, c2;
    int i, j;

    printf("\nEnter rows and columns for 1st matrix: ");
    scanf("%d%d", &r1, &c1);
    
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    
    printf("\nEnter rows and columns for 2nd matrix: ");
    scanf("%d%d", &r2, &c2);

    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    if (r1 == r2 && c1 == c2) {
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                add[i][j] = a[i][j] + b[i][j];

        printf("\nMatrix after addition:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++)
                printf("%d ", add[i][j]);
            printf("\n");
        }
    } else {
        printf("\nAddition isn't possible!\n");
    }

    return 0;
}
