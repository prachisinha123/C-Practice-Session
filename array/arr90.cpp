// #define is something call as preprocessor, which is used to create constant, for Eg: #define x  5, so 
// whenever we want to use 5, we can use x
#include<iostream>
using namespace std;
#define x 5
int main(){
     int i = x;
     cout<<i;
    return 0;
}