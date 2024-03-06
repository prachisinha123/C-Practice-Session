// Record Breaker
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of elements present in the array:"<<endl;
    cin>>n;
    // In this we have to make the array of length n+1,beacuse in this we have to compare the element by next
    // following element,
    int a[n+1];
    a[n] = -1;
    cout<<"Enter the elements of the arrays:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(n == 1){
        cout<<"1"<<endl;
        return 0;
    }
    int ans = 0;
    int mx = -1;
    for(int i = 0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
   }
        mx = max(mx,a[i]);
    
    }
    cout<<"Our answer:"<<endl;
    cout<<ans<<endl;
    return 0;   
}
