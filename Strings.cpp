#include <iostream>
using namespace std;

int main(){
//Concatenation
string firstName = "Rich";
string lastName = "Rec";
//string fullName = firstName + lastName;
//string fullName = firstName + " " + lastName;
string fullName = firstName.append(lastName);
string x = "10";
string y = "5";
string z = x + y; //Concatenation with strings variables
cout << fullName << endl;
cout << z << endl;
//String Length
string txt = "Rec17";
cout << "Length of the text \"Rec17\"" << txt.length();//length() is the same of size()
cout << "Length of the text \"Rec17\"" << txt.size() << endl;
//Accessing character from a String
string myString = "Hello There!";
cout << myString[0];
cout << myString[1] << endl;
myString[0]='J';//I can change a single character from my string object or variable
cout << myString << endl;
//Escape Sequences with Backlash and Special Characters
string text = "We are not \"people\", We are \"Animals\"";//double quote
string text2 = "The character \'A\' isn\'t\' the same than character \'b\'";//single quote
string text3 = "\\This is a Backlash";//Single backlash
string text4 = "Using \\t adds a tab in my string";
string text5 = "Using a \\n adds a new line in my string";
//User's inputs
/*string fName;
cout << "Type your first name";
cin >> fName;
cout << "Your first Name is: " << fName;//If we can capture more than one word, We must use a method, with cin
                                        //We cannot capture more than one word by the whitespaces and tabs*/
string fullName1;
cout << "Type your full name: ";
getline(cin, fullName1);//This method getline() takes 2 parameters, "cin" as first and "StringVar" as second
cout << "Your full name is: " << fullName1;
/*Note: It is optional use the "using namespace std" line, if we do not want to use it, we must include the
"std" keyword and operator "::" together before strings and cout objects*/
return 0;
}
