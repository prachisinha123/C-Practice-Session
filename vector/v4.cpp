//Pop_back:by this our end element in the vector will popeed up. 
#include<iostream>
#include<vector>
using namespace std;
int main(){
       vector<int>v;
       v.push_back(1);
       v.push_back(2);
       v.push_back(3); 
        for(auto element:v){
        cout<<element<<endl<<;
        }
        v.pop_back();
         for(auto element:v){
        cout<<element<<endl;
        }
    return 0;
}