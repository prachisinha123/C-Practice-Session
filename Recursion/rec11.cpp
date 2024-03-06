// Tower of Hanoi:
#include<iostream>
using namespace std;
void towerofHanoi(int n, char src, char dest, char helper){
    // Base case:
      if(n==0){
         return;
        }
    // Move (n-1) blocks form src to helper,(here src:src,helper:dest,and dest:helper)
     towerofHanoi(n-1, src, helper, dest);
    //  Here we have to move the one last block from source to destination
     cout<<"Move from  " <<src<<" to "<<dest<<endl;
    //  Now again we call the function and move the(n-1) block from helper to dest,src is acting as helper
     towerofHanoi(n-1,helper,dest,src);
}
int main()
{ 
     int n;

     cout<<"Enter the value of no of disk: ";
     cin>>n;
    towerofHanoi(n,'A','C','B');
   return 0;
}