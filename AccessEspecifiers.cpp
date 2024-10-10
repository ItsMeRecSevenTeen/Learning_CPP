#include <iostream>
using namespace std;

class MyClass{
public: //Public Access Specifier I can be accessed from outside the class
    int x;
private: //Private Access Specifier It cannot be accessed form outside the class
    int y;
};
class myClassTwo{
    int x;//All Members of a Class will be Private if we do not specify an access specifier
    int y;//It is a good practice declare the class attribute as Private
};
int main(){
    MyClass myObj;
    myObj.x = 25; //Access allowed (Public)
    myObj.y = 50; //Access NOT allowed (Private) and an error ocurrs
return 0;
}
