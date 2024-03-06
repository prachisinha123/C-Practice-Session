// At least two greater elements
// Given an array of N distinct elements, the task is to find all elements in array 
// except two greatest elements in sorted order.
#include<iostream>
#include<vector>
using namespace std;
 vector<int> findElements(int a[], int n)
    {
        sort(a,a+n);
        vector<int> res;
        for (int i=0; i<n-2; i++)
        {
            res.push_back(a[i]);
        }
        return res;
        
    }
int main(){
    vector<int> res;
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Elements except the last two greater element:"<<endl;
     for(int i = 0;i<res.size();i++){
        cout<<res[i]<<"";
     }
     return 0;
}
