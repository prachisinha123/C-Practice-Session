#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep ;
// Here we are using typedef and ep;it means the data-structure which we call ' struct empolyee',we call it now'ep'

// Union:It is like the structure but it provide the better memory-management.
union money
{
    /* data */
    int rice;
    char car;
    float pound;
};
// Here let's say we have a barter system,and there are three types of money,which we can pay for things,
// so at one time,either we can use rice,car or pounds

// Here we are using typedef and ep,it means that in place of typedef struct.It is a shortcut for structure.
// Structure is an user defined datatype in which,every entities are of differnt datatypes,

int main(){
    enum Meal{breakfast,lunch,dinner};
     Meal m1 = breakfast;
     cout<m1;
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
   
    //    union money m1;
    //    m1.rice = 34;
    //    cout<m1.rice;
    //    m1.car = 'c';
    //    cout<<m1.rice;


    //    struct employee harry;
    //  ep harry;
    //   struct employee shubham;
    //   struct empolyee rohanDas;
    //   harry.eId = 1;
    //   harry.favChar = 'c';
    //   harry.salary = 12000000;
    //   cout<<"The value is "<<harry.eId<<endl;
    //   cout<<"The value is "<<harry.favChar<<endl;
    //   cout<<"The value is "<<harry.salary<<endl;
      
      return 0;

}