#include<stdio.h>

int main() {
    int a[10], i, n, temp,j;
    printf("\nEnter number of elements : ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        temp=a[n-1];
        for ( j = n; j>0 ; j--)
        {
           a[j]=a[j-1];  
        }
        a[0]=temp;
        printf("\nARRAY : ");
        for (j = 0; j < n; j++) {
            printf(" %d ", a[j]);
        }
    
    
    }
    
    
    

    return 0;
}
// 10 20 30 40 50
// 50 10 20 30 40
// 40 50 10 20 30
// 30 40 50 10 20
// 20 30 40 50 10
// 10 20 30 40 50
