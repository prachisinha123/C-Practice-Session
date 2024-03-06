#include<iostream>
using namespace std;
// Class is a datatype to store different types of database.
class student{
    public:
    string name;
    int age;
    bool gender;
    // This function is of student class,
    // this function is for print the input value ,here we don't need to pass any object
    void printInfo(){
        cout<<"Name: ";
        cout<<name<<endl;
        cout<<"Age: ";
        cout<<age<<endl;
        cout<<"Gender :";
        cout<<gender<<endl;
        
    }

};

int main(){

    // Here we got the error,because by default all the data-members of our class is private,we can access the data inside the class.

    // we are not  able to access the data from the class outside the class.To access the data outside the
    // class we have to make it public.
    // In order to access the data from the class we use the dot(.) operator.
    // Here we are making a student a;
    // student a; 
    // a.name = 'Urvi';
    // a.age = 20;
    // a.gender = 1;
    // Like this we made for each and  every student
    // 2nd Method:We can made an array of object for (n number of student),so our array is of student type
     student arr[3];
     for(int i = 0;i<3;i++){
        cout<<"Name: ";
        cin>>arr[i].name;
        cout<<"Age: ";
        cin>>arr[i].age;
        cout<<"Gender :";
        cin>>arr[i].gender;
     }
     for(int i = 0;i<3;i++){
        arr[i].printInfo();
     }


    return 0; 
}