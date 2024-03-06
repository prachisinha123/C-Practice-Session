// How to take input of character array
#include <iostream>
using namespace std;
int main()
{
  char arr[100];
  cout << "Enter the element in character array:" << endl;
  // Taking input is like taking a variable as input.
  cin >> arr;
  cout << "Print the elements of the character array:" << endl;
  cout << arr<<endl;
  // If we want to print a particular character of the array,then we do like this.
  cout << "Print only the 3rd character of the character array:" << endl;
  cout << arr[2];

  return 0;
}