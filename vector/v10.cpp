// Different functions of vector:
// 1)Pop()function:it will remove the last element of the vector
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<< " ";

    }
    cout<<endl;
}
int main()
{
   vector<int>v1;
   int element;
//    cout<<"Enter the size of yuor vector"<<endl;
//    cin>>size;
     for(int i = 0;i<4;i++){
        cout<<"Enter an element to add to this vector:"<<endl;
        cin>>element;
        v1.push_back(element);
        // it removes the last element from the vector
     }
     v1.pop_back();
     display(v1);
    return 0;
}