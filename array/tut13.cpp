#include<iostream>
using namespace std;

int main()
{
    // Array Example
    int marks[4] = {23,45,56,89};
    int mathMarks[4];
    mathMarks[0] = 2274;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;
    cout<<"These are math marks"<<endl;
   cout<<mathMarks[0]<<endl;
   cout<<mathMarks[1]<<endl;
   cout<<mathMarks[2]<<endl;
   cout<<mathMarks[3]<<endl;
   //    You can change the value of the array.We have to change the value after print.
   marks[2] = 455;
   cout<<"THese are marks"<<endl;
//    cout<<marks[0]<<endl;
//    cout<<marks[1]<<endl;  
//    cout<<marks[2]<<endl;
//    cout<<marks[3]<<endl;
for (int i = 0; i < 4; i++)
{
    cout<<"The value of marks"<<i<<" is "<<marks[i]<<endl;   
}

// Quick quiz:do the same using while and do-while loops,
// Pointerand arrays
// Here we are making pointer variable,and we make it equal to marks,
int *p = marks;
// Below code,it will print first the valie at p,then increment the pointer,
cout<<*(p++)<<endl;
// if we type this,it will print the value at p.
// cout<<*p;
// Below code first get incremented and then,it will print the value at that location.
cout<<*(++p)<<endl;
// cout<<*P;

// cout<<"The value of p* is "<<*p<<endl;
// cout<<"The value of (p+1) is "<<*(p+1)<<endl;
// cout<<"The value of (p+2) is "<<*(p+2)<<endl;
// cout<<"The value of (p+3) is "<<*(p+3)<<endl;
return 0;  

} 