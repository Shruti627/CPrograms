#include<stdio.h>
int main()
{
    int a[10],i,n,max,loc;
    printf("\nEnter total no. of entries : ");
    scanf("%d",&n);
    printf("\nEnter %d numbers : ",n);
    for(i=0;i<n;i++)
    {
        
        scanf("%d",&a[i]);
        
    }
    max=a[0];
    
    for ( i = 0; i < n; i++)
    {
        if(max<a[i])
            max=a[i];
            loc=i;
    }
    max=a[i];
    for ( i = 0; i < n; i++)
    {
       if(max<a[i] && loc!=i)
       {
        max=a[i];
       }
    }
    
    
    printf("\n2nd -Max=%d",max);
   
    return 0;
}