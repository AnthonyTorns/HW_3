/****
* PSEUDOCODE:
* algorithm reverse
*  input array of ints with void output
*  for the first half of elements in the  array swap positions with the second half of elements with in the array
*  
*  algorithm has balanced parenthesis
*    int to represent position
*    int to determine if a phrase is balanced or unbalanced(0 = balnced anything else = unbalanced)
*    do{
*      if phrase contains a  close parenthesis before a open parenthesis has occured return false
*      else if a character at given position is other than a open or close parenthesis move to next position
*      else if character at given position equal a close parenthesis count is de-incremented by one
*      else if character is equal to open parenthesis count is incremented by one.
*    all while the o=position is less than the length of the phrase
}
*   if the count is anthing other than 0 return false
*   else return true
*
*  algorithm if wrrd is in doggish
*    take in a word from user and pass the word along with "dog". Return the value of the function in x ish.
*    
* algorithm if i word is in a given word named x
*   if string is empty return false
*   if the length of the string being evaluated is less than the amount of words neeeded to be found in the given phrase return false
*   if the character of the word being evlauated is equal to the character in the needed phrase 
*      check to see if we have found all words in the needed phrase and if so return true
*   call the itself with the remaining part of the word and the remaining phrase that needs to be found 
*   else call itself with the remaining part of the word and whatever is left of the phrase that needs to be found
*
*/
#include <iostream>
#include <string>
#include "hw3.h"
using std::string;

void ReverseArray(int input_array[], int length){
 int holder = 0; 
 for (int i =1; i <= length/2; i++) {
    holder = input_array[i-1];
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
  if ( word == "") {
    return false;
  }
  if (word.length() < expected_word.length()) {
    return false;
  }
  if (word[0] == expected_word[0]) {
    if (expected_word.length() == 1) {
      return true;
    }
    return(InXish(word.substr(1,word.length()), expected_word.substr(1, expected_word.length())));
  }
  else {
    return(InXish(word.substr(1, word.length()),expected_word));
  }
}   