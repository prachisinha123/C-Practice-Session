
#include<iostream>
#include<string>
using namespace std;

    string toLower(string str)
    {
        for(int i = 0;i<str.size();i++)
        {
        if(str[i]>='A' && str[i] <= 'Z')
          str[i] += 32;
        }
      return str;
    }

int main()
{
    string str;

    cout<<"Enter the string"<<endl;
    cin>>str;

    cout<< toLower(str);
  
    return 0;        
}




