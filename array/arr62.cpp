// Fascinating Number
// Given a number N. Your task is to check whether it is fascinating or not.
// Fascinating Number: When a number(should contain 3 digits or more) is multiplied by 2 and 3,
//  and when both these products are concatenated with the original number, then it results in all
//   digits from 1 to 9 present exactly once.
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool fascinating(int n) {
	string s = to_string(n)+to_string(n*2)+to_string(n*3);
         sort(s.begin(), s.end());
            if(s=="123456789"){
	        return true;
	    } 
	    else
	        return false;
    	}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<fascinating(n);
    return 0;
}