/*
6.27 LAB: Count characters - functions

Write a program whose input is a character and a string, and whose output indicates the number of times the character appears in the string.

Ex: If the input is:

n Monday

the output is:

1

Ex: If the input is:

z Today is Monday

the output is:

0

Ex: If the input is:

n It's a sunny day

the output is:

2

Case matters. n is different than N.

Ex: If the input is:

n Nobody

the output is:

0

Your program must define and call the following function that returns the number of times the input character appears in the input string. int CountCharacters(char userChar, string userString)
*/

#include <iostream>
using namespace std;

int CountCharacters(char userChar, string userString) {
    int charCount = 0;
    
    for (int i = 0; i < userString.size(); ++i) {
        if (userString.at(i) == userChar) {
            ++charCount;
        }
    }
    return charCount;
}

int main() {
   char userChar;
   string userString;

   cin >> userChar;
   getline(cin, userString);

   cout << CountCharacters(userChar, userString) << endl;

   return 0;
}
