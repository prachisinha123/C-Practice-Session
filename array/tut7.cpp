#include<iostream>

using namespace std;
int c = 45;
// This is global variable.
int main()
{
    //********************float,double and long double LITERALS***********
    // int a,b,c;
    // cout<<"Enter the values of a :"<<endl;
    // cin>>a;
    //  cout<<"Enter the values of b :"<<endl;
    // cin>>b; 
    // c = a+b;
    // cout<<"The value of sum is "<<c <<endl;
    // If we want to get the value of c which is declared globally.Then we use scope-resolution operator.
    // we can get the global value of c by writing ::c
    // cout<<"The global c is "<<::c;
    // float d = 34.4f;
    // long double e =34.3l;
    // by default decimal value is (34.4) is double.
    // To specify a decimal value as float,then we write f after value ,that is 34.4f(it passes as float value)
    // To specify a decimal value as long double we write the value as = 34.3lor 34.3L
    // Now we are using sizeof operator to know the size of the float,double,etc.
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // Here we haven't declare the the value as double or float,anything.So by default it is taken as double
//     cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
//     cout<<"The size of 34.4Fis "<<sizeof(34.4F)<<endl;
//     cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
//     cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
//     cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
// **********************Reference Variables**************************
// Let's take an example:There is a boy name Rohan Das ,and his mother called him Monty,his mother called him Rohu,
// and he called himself ad dangerous coder.
// Rohan Das----> Monty ----> Rohu ----->DangerousCoder,but all names are of single person Rohan Das
// Similarly, if we want to call any value by two different names,or by two or different names,then for this
// we use a reference variable.
// float x = 455;
// By this we are making a reference variable 
// float x = 455;
// float & y = x;
// cout<<x<<endl;
// cout<<y<<endl;
// ************Typecasting************
// Typecasting:meaning is to convert one datatype into another datatype.
int a = 45;
int b = 45.46;
// cout<<"The value of a is "<<a;   
// cout<<"The value of a is "<<(float)a<<endl;  
// So here we are converting value a (integer) into float.
//  cout<<"The value of b is "<<(int)b<<endl;
//  Here we are converting the value of b (float) into integer.
// In c++ we can do tyoecasting like this also:Both are same ,only change is there in syntax.
// cout<<"The value of a is "<<float(a)<<endl;  
// cout<<"The value of b is "<<int(b)<<endl;
int c = int(b);
cout<<"The expression is "<<a + b<<endl;
cout<<"The expression is "<<a + int(b)<<endl;
cout<<"The expression is "<<a + (int)b<<endl;
return 0;
} 