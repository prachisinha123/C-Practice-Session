#include<iostream>
using namespace std;

int main(){
//     for(int i = 0; i < 40; i++)
//     {
//     // cout<<i<<endl;
//     if(i==2){
//         break;
//     }
//     cout<<i<<endl;
// }
// Here we are using the keyword break,it means that break the loop and come out of the loop.

    for(int i = 0; i < 40; i++)
    {
    if(i==2){
        continue;
    }
    cout<<i<<endl;
}
// as the value of i = 2,it doesn't print that 2 , but it will continue to print the next element.
// So for continue the printing , we have to type the key word 'contuinue'

return 0;
}