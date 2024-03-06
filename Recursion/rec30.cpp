// Joephus Problem:Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle in a fixed direction.
// After each operation, the count will start from k+1th person. 
// The task is to choose the safe place in the circle so that when you perform these operations 
// starting from 1st place in the circle, you are the last one remaining and survive.
#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>v,int k,int index,int &ans ){
    if(v.size()==1){
        ans = v[0];
        cout<<ans;
        return;
    }
    index = (index+k)%v.size();
    v.erase(v.begin()+index);
    solve(v,k,index,ans);

}
int main(){
    int n,ans;
    int k;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of k: ";
    cin>>k;

    int index = 0; 
    vector<int>v;
    for(int i=1;i<=n;i++){ 
        v.push_back(i);
    } 
    k = k-1;
     solve(v,k,index,ans);
     return 0;
   
}