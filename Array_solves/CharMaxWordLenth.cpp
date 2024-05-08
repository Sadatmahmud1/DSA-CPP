#include <iostream>
#include<string>
using namespace std;

int main() {
 string sentence;
 string longestWord;
 cout << "Enter a sentence: ";
 getline(cin, sentence);

 int maxLength = 0;
 int currentLength = 0;

 for (int i = 0; i <= sentence.length(); i++)
 {
   if (i<sentence.length() && sentence[i] != ' ')
   {
    currentLength++;
   }
   else{
    if (currentLength > maxLength)
    {
     maxLength = currentLength;
     longestWord = sentence.substr(i-currentLength, currentLength);
    }
    
    currentLength = 0;
   }
   
 }
 
 cout << "The longest word is: " << longestWord << endl;
 cout << "The length of the longest word is: " << maxLength << endl;
  
    return 0;
}