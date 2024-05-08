#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  string str1 = "fam";
  string str2 = "ily";
  string str3 = "robo";
  string str4 = "tics";
  string Name = "Sadat Mahmud";
  string empty = "Hellow world";
  string num1 = "abc";
  string num2 = "abc";
  string num3 = "abc";
  string num4 = "arc";
  string Erase = "apoloEleven";
  string country = "Bangladesh";
  string Rajshahi = "chapai";
  string Naogaon = "Rice";

  empty.clear();
  Name.clear();
  str1.append(str2);
  str3 = str3 + str4;
  cout << str1 << endl;
  cout << str3 <<endl;
  cout << str1 + str4 <<endl;
// accessing the output of strings charecter
  cout<<str1[2]<<endl;
  cout <<"string is clared: "<< Name <<endl;

  if (empty.empty())
  {
   cout<<"String is Empty"<< endl;
  }

  num1.compare(num2);

  cout<<num1.compare(num2)<<endl;

if (num1.compare(num2) == 0)
{
   cout<<"This Strig is Equal"<<endl;
}

if (!num1.compare(num2))
{
   cout<<"This Strig is not Equal"<<endl;
}

cout<<Erase.erase(2,3)<<endl;

cout<<Erase.find("Eleven")<<"th index"<<endl;

cout<<Erase.insert(2,"plo")<<endl;

cout<<country.length()<<endl;

cout<<country.substr(0,6)<<endl;

for (int i = 0; i < country.length(); i++)
{
   cout<<country[i]<<endl;
}

cout<<Rajshahi.append("mango")<<endl;
cout<<Naogaon.append("AutoMills",4,5)<<endl;

//string type conversion
string StrType = "995";
int myint = stoi(StrType);
cout<<myint + 5 <<endl;

string IntType = to_string(myint);
cout<<IntType + " This is string"<<endl;

//string sorting
string alphabet = "ccchtreraewqyiuyksajoyfe";
string alphabetlow = "THIS IS A VAERY HOT SUMMER";

sort(alphabet.begin(), alphabet.end());
cout<<alphabet;

 transform(alphabet.begin(), alphabet.end(), alphabet.begin(), ::toupper);
  transform(alphabetlow.begin(), alphabetlow.end(), alphabetlow.begin(), ::tolower);

    cout << "Uppercase: " <<alphabet << endl;
    cout << "lowercase: " <<alphabetlow << endl;

//string transformation

string str = "This is a very hot summer";
string str22 = "TURKISH FOOD IS DELICIOUS";

for (int i = 0; i < str.size(); i++)
{
    if (str[i] >= 'a' and str[i]<='z')
    {
       str[i]-=32;
    }
    
}
for (int i = 0; i < str22.size(); i++)
{
   if (str22[i] >= 'A' and str22[i] <= 'z')
   {
    str22[i] += 32;
   }
   
}

cout<<str<<endl;
cout<<str22<<endl;

string numericNum = "42424309880";

sort(numericNum.begin(), numericNum.end(), greater<int>());

cout<<numericNum<<endl;
    return 0;
}