#include<stdio.h>
int main()
{

    int a[10],i,j,n,key;
    printf("\nEnter no. of elements : ");
    scanf("%d",&n);
    printf("\nEnter %d elements: ",n);
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);
    
    printf("\nEnter element to be DELETED : ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key){
            
            for(j=i+1;j<n-1;j++)
             
                a[j]=a[j+1];
            n--;
            i--;
            // break;
        }
    }
    printf("\n ARRAY :");
    for (i=0;i<n;i++)
        {
            printf(" %d ",a[i]);
        }
    return 0;



}