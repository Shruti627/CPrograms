#include<stdio.h>
int main()
{
    int n1,n2,a[30],b[30],i,j,k,uni[60],u=0,in=0,intersection[30];
    printf("\nEnter n1: ");
    scanf("%d",&n1);
    
    for ( i = 0; i < n1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter n2: ");
    scanf("%d",&n2);
    for ( i = 0; i < n2; i++)
    {
        scanf("%d",&b[i]);
    }

    for ( i = 0; i < n1; i++)
    {
        for ( j = i+1; j < n1; j++)
        {
            if(a[i]==a[j]){
                for ( k = 0; k < n1-1; k++)
                {
                    a[k]=a[k+1];
                }
                n1--;
                j--;
            }
        }
        
    }
    for ( i = 0; i < n2; i++)
    {
        for ( j = i+1; j < n2; j++)
        {
            if(b[i]==b[j]){
                for ( k = 0; k < n2-1; k++)
                {
                    b[k]=b[k+1];
                }
                n2--;
                j--;
            }
        }
        
    }
    for ( i = 0; i < n1; i++,u++)
    {
        uni[u]=a[i];
    }
    for ( i = 0; i < n2; i++,u++)
    {
        uni[u]=b[i];
    }
    
    for ( i = 0; i < n1; i++)
    {
        for ( j = n1; j < u; j++)
        {
            if(uni[i]==uni[j]){
                for ( k = j; k < u; k++)
                    uni[u]=uni[k+1];
                intersection[in] = uni[i];
                in++;
                u--;
                
                
            }
        }
        
    }
    printf("\nUnion :");
    for ( i = 0; i < u; i++)
    {
        printf("\t%d",uni[i]);
    }
    printf("\nIntersection :");
    for ( i = 0; i < in; i++)
    {
        printf("\t%d",intersection[i]);
    }
    
    return 0;
}