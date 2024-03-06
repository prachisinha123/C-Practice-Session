// ShortCut method to convert upper-case into lower-case and lower case into upper case
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   string s = "hgfetuejvny";
//    transform() function 's parameters:At first we pass the wole string,by passing begining iterator and end iterator
// then,we have to mention that from where we have to start the captilizing or lower the string,s.begin()
// then,we write ::toupper  OR ::tolower
   transform(s.begin(), s.end(), s.begin(), ::toupper);

   cout<<s<<endl;
   transform(s.begin(),s.end(),s.begin(), ::tolower);
   cout<<s<<endl;
    
    return 0;
}