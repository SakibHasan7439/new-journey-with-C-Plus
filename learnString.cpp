#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello";
  cout << greeting <<endl;

  string firstName = "Sakib";
  string lastName = " Hasan";
  string fullName = firstName + "" + lastName;
  string lastWord = " is a frontend developer";
  string hisName = fullName.append(lastWord);
  cout<<hisName<<endl;

  string myDesignation = "Junior Frontend Developer";
  // cout<<"The designation length is: "<<myDesignation.size()<<endl;
  // cout<<myDesignation[0]<<endl;
  // string word = "World";
  // cout<<word[word.length()-1]<<endl;
  // string newWord = "this";
  // newWord[0] = 'k';
  // cout<<newWord<<endl;
  // cout<<newWord.at(2)<<endl;
  // cout<<"Last word of this variable: "<<newWord.at(newWord.length()-1)<<endl;
  // special characters
  string famousText = "we are the so called \"Vikings\" from the north";
  cout<<famousText<<endl;

  int first, second;
  cout<<"Type first number: ";
  cin>>first;
  cout<<"Type second number: ";
  cin>>second;
  cout<<"Total Sum is: "<<first + second<<endl;
  return 0;
}