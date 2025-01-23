#include<stdio.h>
int main(){
    int a[10],i,n,max,min;
    printf("\nEnter no. of elememts : ");
    scanf("%d",&n);
    printf("\nEnter %d elements ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    
    for ( i = 0; i < n; i++)
    {
        if(max<a[i])
            max=a[i];
        if(a[i]<max)
            max=a[i];

    }
    
    
    printf("\n Second Maximum is %d", max);
    
    return 0;

}