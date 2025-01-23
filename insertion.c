#include<stdio.h>
int main()
{

    int a[10],i,j,n,key,pos;
    printf("\nEnter no. of elements : ");
    scanf("%d",&n);
    printf("\nEnter %d elements: ",n);
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("\nEnter position to be INSERTED : ");
    scanf("%d",&pos);
    
    
    
    if(pos>=0 && pos<n+1){
        printf("\nEnter element to be INSERTED : ");
        scanf("%d",&key);
        
        for ( i = n; i>=pos; i--)
            a[i]=a[i-1];
        a[pos-1]=key;
        n++;
    }else{
        printf("\nInvalid Position!");
    }
    

    
    printf("\n ARRAY :");
    for (i=0;i<n;i++)
        {
            printf(" %d ",a[i]);
        }
    return 0;



}