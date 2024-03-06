// Another way to iterate through vector:is by having an iterator,
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
vector<int>::iterator it;
// here we got a iterator 'it'.
for(it=v.begin();it!=v.end();it++){
    // 'it' is a pointer,
    cout<<*it<<endl;
}

    return 0;   
}