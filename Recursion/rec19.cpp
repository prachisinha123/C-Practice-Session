// Count the number of polls possible from start point to end point in gameboard:
#include<iostream>
using namespace std;
int countPath(int s,int e){
    if(s==e){
        return 1;  
    }
    if(s>e){
        return 0;
    }
    int count = 0;
    for(int i = 0;i<=6;i++){
        count = count+countPath(s+i,e);
    }
    return count;
}
int main(){
    int s,e;
    cout<<"Enter the starting point:"<<endl;
    cin>>s;
    cout<<"Enter the ending point:"<<endl;
    cin>>e;
    cout<<countPath(s,e)<<endl;
    
    return 0;
}