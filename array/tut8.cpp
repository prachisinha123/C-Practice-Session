#include<iostream>
#include<iomanip>
using namespace std;

int main()
{ 
//     int a = 34;
    // char c = 'c';
    // cout<<"The value of a was: "<<a<<endl;
    //  a = 45;
    //  c = '4';
    // cout<<"The value of a is: "<<a<<endl;
    // Here at the end our value got changed.
    // If we want that our value remains same then we can use constat in c++,by using const keyword.
    // const int a = 3;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is: "<<a<<endl;
    // So here errors come in terminal,and it tells that you cann't do this because we cann't change the
    // constant  
    // Without setw:
      int a = 3 ,b = 78,c = 1233;
      // Manipulators iin c++:
      // cout<<"The value of a without setw is:"<<a<<endl;
      // cout<<"The value of b without setw is:"<<b<<endl;
      // cout<<"The value of c without setw is:"<<c<<endl;
      // with setw:It is a manipulator,here we take setw(4),which will set there width to "4".
    //  cout<<"The value of a is:"<<setw(4)<<a<<endl;
    //  cout<<"The value of b is:"<<setw(4)<<b<<endl;
    //  cout<<"The value of c is:"<<setw(4)<<c<<endl;

    // Operator Precedence:
     int a =3,b = 4;
     int c = ((((a*5)+b)-45)+87);
     cout<<c<<endl;
     return 0;
}
    