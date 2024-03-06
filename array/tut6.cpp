#include<iostream>
// This are two types of header files:
// 1.System header files:It comes with the compiler.
// 2.User defined header files:It is written by the programmer.we can make this file,
// #include "this.h"
// This will produce errors,if this.h is not present in the current directory.
// By writing this we are geeting errors,so to get rid of errors,we have to make a file named 'this.h
// Now by writing this we can run our code.


using namespace std;

int main(){
    int a =4, b = 5;
cout<<"Operators in c++:"<<endl; 
// <<endl is used to get a new line.
cout<<"Following are the types of operators in c++"<<endl;
// Arithmetic Operators
cout<<"The value of a+b is"<<a+b<<endl;
cout<<"The value of a-b is"<<a-b<<endl;
cout<<"The value of a*b is"<<a*b<<endl;
cout<<"The value of a/b is"<<a/b<<endl;
cout<<"The value of a%b is"<<a%b<<endl;
cout<<"The value of a++ is"<<a++<<endl;
cout<<"The value of a-- is"<<a--<<endl;
cout<<"The value of ++a is"<<++a<<endl;
cout<<"The value of --a is"<<--a<<endl;
cout<<endl;
// Assignment Operators:Assignment operators are used to assign variables
// int a= 3,b =9;
// char d = 'd';
// Comparison operations
cout<<"Following are the comparison operators in c++"<<endl;
cout<<"The value of a==b is "<<(a==b)<<endl;
cout<<"The value of a!=b is "<<(a!=b)<<endl;
cout<<"The value of a>b is "<<(a>b)<<endl;
cout<<"The value of a<b is "<<(a<b)<<endl;
cout<<"The value of a<=b is "<<(a<=b)<<endl;
cout<<"The value of a>=b is "<<(a>=b)<<endl;
// Logical operators:
cout<<"Following are the Logical operators in c++"<<endl;
cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))
<<endl;
cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))
<<endl;

cout<<"The value of this logical not operator ((a==b) || (a<b)) is:"<<(!(a==b))<<endl;







return 0;
} 