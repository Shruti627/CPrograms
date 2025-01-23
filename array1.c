#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0;
    printf("\nEnter total no. of entries : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter a number : ");
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for ( i = 0; i < n; i++)
    {
        printf("\n%d number at index %d ",a[i],i);
    }
    printf("\nSum = %d",sum);
    
        return 0;
}