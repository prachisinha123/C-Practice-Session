// Best time to buy and sell stocks:Naive solution
#include <iostream>
#include <climits>  
using namespace std;
int bestTime(int a[],int n){
    int buy = INT_MAX;
    int index;
    for(int i = 0;i<n;i++){
        if(a[i]<buy)
        buy = a[i];
        index = i;
    }
     int sell = buy;
    for(int i = index;i<n;i++){
        if(a[i]>sell)
        sell = a[i];    
    }
    int max_profit = sell-buy;
    return max_profit;

    // return buy;
}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the value of elements present in the array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cout<< bestTime( a, n);
    return 0;
}


