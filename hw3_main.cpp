#include <iostream>
#include <string>
#include "hw3.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
  //Test ReverseArray();
  int arr[] = { 1, 2, 3, 4, 5 };
  int n = sizeof(arr)/sizeof(arr[0]);
  ReverseArray(arr, n);
  for (int i = 0; i < n; i++) {
	  cout << arr[i] << " ";
  }
  cout << endl;

//Test HasBalancedParentheses();
 string statement1 = "((())())";
  if (HasBalancedParentheses(statement1)) {
    cout << "It is Ballanced!" << endl;
 }
 else {
   cout << "It is not Ballanced! " << endl;
 }


// Test IsDogish();
  string mydogs;
  string phrase =  "dog";
  cout << "Enter a word that you would like to evaluate for the word ";
  cin>>mydogs;
  if(InDogish(mydogs)) {
    cout << "Is Dogish!" << endl;
  }
  else {
    cout << "Not Dogish!" << endl;
  }

  //Test IsXish();
  string mytext;
  string myword;
  cout << "Enter a word that you would like to use as your base: ";
  cin >> myword;
  cout << "Enter a word that you would like to evaluate: ";
  cin >> mytext;
  if (InXish(mytext, myword)) {
    cout << "Is Xish!" << endl;
  }

  else {
    cout << "Not X-ish!" << endl;;
  }

return 0;
}


