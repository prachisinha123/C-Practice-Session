// Print the same element 'n' number of times:
// Swap function()
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
   //   for(int i = 0;i<v.size();i++){
   //      cout<<v[i]<<endl;  

   //   }
 vector<int> v1(3,50);
//  for(int i = 0;i<v1.size();i++){
//     cout<<v1[i]<<endl;
//  }
 swap(v,v1);
 for(int i = 0;i<v.size();i++){
   cout<<v[i]<<endl;
 }
 for(int i = 0;i<v1.size();i++){
   cout<<v1[i]<<endl;
 }

    return 0;
}