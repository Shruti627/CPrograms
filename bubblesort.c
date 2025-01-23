// #include<stdio.h>
// int main(){
//     int a[15],i,j,n;
//     printf("\nEnter total no. of entries : ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++)
//     {
//         printf("\nEnter a number : ");
//         scanf("%d",&a[i]);
        
//     }
//     for(i=0;i<n;i++)
//     {
//         for ( j = 0; j < n-i-1; j++)
//         {
//             if(a[j]>a[j+1]){
//             int temp=a[j];
//             a[j]=a[j+1];
//             a[j+1]=temp;
//             }
            
//         }
       
        
        
//     }
//     for ( i = 0; i < n; i++)
//         {
//             printf("%d\t",a[i]);
//         }
    
    
//     return 0;
// }
//logic 2:
#include<stdio.h>
int main(){
    int a[15],i,j,n;
    printf("\nEnter total no. of entries : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter a number : ");
        scanf("%d",&a[i]);
        
    }
    printf("\nBefore sorting: ");
    for ( i = 0; i < n; i++)
        {
            printf("%d\t",a[i]);
        }
    i=0;
    int flag=1;
    while(flag)
    {
        flag=0;
        for ( j = 0; j < n-i-1; j++)
        {
           if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;
            }
        }
        i++;
    }
    printf("\nAfter sorting: ");
    for ( i = 0; i < n; i++)
        {
            printf("%d\t",a[i]);
        }
    return 0;
}
