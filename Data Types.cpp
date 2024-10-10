#include <iostream>
#include <string> //If I Want To Use Strings Data Types, I Must Include This Header (Does happen nothing if I don't use it :p)
using namespace std;

int main(){
int myNum = 5;
float myFloatNum = 7.69;//It uses about 6 spaces after floating point
double myDoubleNum = 9.86;//It uses about 15 spaces after floating point
char myLetter = 'R';
bool myBoolean = true;
string myText = "Hello";

float f1 = 8E9; //Scientific Numbers
double d1 = 17E5;
cout << f1 <<endl;
cout << d1 << endl;

char myGrade = 'A';
cout << myGrade << endl;

char a = 65, b = 66, c = 67;
cout << a;
cout << b;
cout << c;

string greeting = "Hello";
cout << greeting;
return 0;
}
