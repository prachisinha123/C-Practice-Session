#include<iostream>
using namespace std;
int function(){
   static int num = 0;
    num++;
    return num;

}
int main(){
    
   cout<<"The number after result:"<<function()<<endl;
     cout<<"The number after result:"<<function()<<endl;
    cout<<"The number after result:"<<function()<<endl;
   return 0;
}
// Static variable:if we make a variable static in a particular ,and if we call that function again and again
// then,that variable stored the result of the previous call,the code line of initialization runs only a t once
// Noemal varialbe:Here it get initialized,after evey call.
