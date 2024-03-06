//2) Insert() function:It is used for inserting new elements before the element at the specified position.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i = 0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
  cout<<endl;
}
int main(){
    vector<int>v1;
    int element;
    cout<<"Enter an element to add this vector:"<<endl;
    for(int i = 0;i<4;i++){
        cin>>element;
        v1.push_back(element) ;   
    }
    display(v1);
    // Insert():It requires an iterator(which is like a pointer, which points any element in the vector);
    // way to make an iterator: here we want that our iterator will points from the begining element.
    vector<int> :: iterator iter = v1.begin();
    // v1.insert(iter,556);
    // It  will insert 556 at the starting of the vector,by default.
    // v1.insert(iter+1,556);
    // if we want to insert 5 copies of '556'
    v1.insert(iter+1,5,556);
    // it will insert before that element where iterator is pointing.
    // here iterator is pointing at 2nd position ,it will insert the element at the position of before 2,
    
    display(v1);


    return 0;
}