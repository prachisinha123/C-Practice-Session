// Element access function,at():It tells that which element is at where, 
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
  for(int i = 0;i<v.size();i++){
    // cout<<v[i]<<" ";
     cout<<v.at(i)<<" ";
  }
  cout<<endl;
}
int main(){
  vector<int> v;
  
  int element;
  cout<<"Enter an element to add into vector:"<<endl;
  for(int i = 0;i<4;i++){
    cin>>element;
    v.push_back(element);
  }
  display(v);
    return 0;
}