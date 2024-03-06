// Best time to buy and sell stocks:Naive solution
#include<iostream>
using namespace std;
int max_Profit(int prices[], int n){
    int buy = prices[0], max_profit = 0;
    for(int i = 1;i<n;i++){
        //  Checking for the lower price.
        if(buy>prices[i]){
              buy = prices[i];
        }
    else if (prices[i]-buy > max_profit)
           max_profit = prices[i] - buy;
    }
    return max_profit;

}
int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the value of elements present in the array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
   cout<<max_Profit (a, n);
    return 0;
}