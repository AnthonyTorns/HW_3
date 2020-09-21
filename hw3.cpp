/****
* PSEUDOCODE:
*
*/
#include <iostream>
#include <string>
#include "hw3.h"
using std::string;

void ReverseArray(int input_array[], int length){
for (int i =1; i <= length/2; i++) {
int holder = input_array[i-1];
input_array[i-1] = input_array[length-i];
input_array[length-i] = holder;
  }
}

bool HasBalancedParentheses(string phrase){
  int i = 0;
  int count = 0;
  do{
    if (phrase[i] == ')' && count == 0) {
      return false;
    }
    else if(phrase[i] != '(' && phrase[i] != ')') {
      i++;
    }
    else if ( phrase[i] == ')') {
      count--;
      i++;
    }

    else if (phrase[i] == '(') {
      count++;
      i++;
    }
  }while (i < phrase.length());
  if ( count != 0) {
    return false;
  }
  else {
    return true;
  } 
}
 
bool InDogish(string word){
  return InXish(word, "dog");
}   

bool InXish(string word, string expected_word){
  bool found = false;
  if ( word == "") {
    return found;
  }
  if (word.length() < expected_word.length()) {
    return false;
  }
  if (word[0] == expected_word[0]) {
    found = true;
    if (found == true && expected_word.length() == 1) {
      return true;
    }
    return(InXish(word.substr(1,word.length()), expected_word.substr(1, expected_word.length())));
  }
  else {
    return(InXish(word.substr(1, word.length()),expected_word));
  }
}   