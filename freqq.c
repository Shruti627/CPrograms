#include<stdio.h>
int main(){
    int a[10],i,j,n,key;
    printf("\nEnter total no. of entries : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter a number : ");
        scanf("%d",&a[i]);
        
    }
    printf("\nEnter element to be searched : ");
    scanf("%d",&key);
    int cnt=0;
    for(i=0;i<n;i++)
    {
      
        if(a[i]==key){
                cnt++;
            }
    }
    printf("%d element occurs: %d times",key,cnt);
    
}