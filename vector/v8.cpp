// How to take input from users under vectors and display it.by making display function()
// This can be done by using for loop: 

#include<iostream>
#include<vector>
using namespace std;
// &v is reference to integer vector.
// void display(vector<int> &v){
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<< " ";

//     }
//     cout<<endl;
// }
int main(){
   vector<int> v1;
   int element;
//    this for-loop is used to add element to the vector.
    cout<<"Enter an element to add to this vector:"<<endl;
    for(int i = 0;i<4;i++){
        // cout<<"Enter an element to add to this vector:"<<endl;
        cin>>element;
        v1.push_back(element);
      
    }
    //   display(v1); 
    // Without making function: 
    for(int i = 0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}