#include <iostream>
using namespace std; 
int main()
{
    int a[]={11,45,3,2,7};
    int i,j;
    
    int n=(sizeof(a))/(sizeof(a[0]));
    cout<<"n="<<n<<endl;
   
    //for(int ele : a){
        //cout<<ele<<endl;
    //}
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<"Sum  : "<<sum;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int e:a){
        cout<<"\n"<<e<<endl;
    }

    return 0;
}