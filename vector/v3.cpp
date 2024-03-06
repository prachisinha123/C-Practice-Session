// Another way to traverse the vector:Easy way
#include<iostream>
#include<vector>
using namespace std;
int main(){
       vector<int>v;
       v.push_back(1);
       v.push_back(2);
       v.push_back(3); 
    for(auto element:v){
        cout<<element<<endl;
        // Here 'element' is not an iterator,it signifies the elements in the vector.
    }

    return 0;
}