#include<stdio.h>
int main()
{
    int a[10],i,n,max,min;
    printf("\nEnter total no. of entries : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter a number : ");
        scanf("%d",&a[i]);
        
    }
    max=a[0];
    min=a[0];
    for ( i = 0; i < n; i++)
    {
        if(max<a[i])
            max=a[i];
    
    }
    for ( i = 0; i < n; i++)
    {
        if(min>a[i])
            min=a[i];
    
    }
    
    printf("\nMax=%d",max);
    printf("\nmin=%d",min);
    
    return 0;
}