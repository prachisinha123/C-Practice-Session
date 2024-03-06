#include<iostream>
using namespace std;
// Here we are making the function,and we write the arguments which it will take,
int sum(int a,int b){
    int c = a+b;
    return c;
}
 int main()
 { 
 int num1,num2;
 cout<<"Enter first number"<<endl;
 cin>>num1;
 cout<<"Enter the second nnumber"<<endl;
 cin>>num2;
 cout<<"The sum is "<<sum(num1,num2);
 g();
//  How it will work:
// At first this function search for sum,then it will pas num1 and num2,and then it assign the value of num1 to a and num2 to b,
// Now sum is done and it is stored in c,and the value of c become 7,and c will get return.
// In the case of main,the return value is 0,but in case of sum it is 'c'.
// Function prototype:
//  int sum(int a,int b){
//     int c = a+b;
//     return c;
 }
 void g(){
    cout<<"Hello,Good Morning";
 }
  

 

 return 0;
 }