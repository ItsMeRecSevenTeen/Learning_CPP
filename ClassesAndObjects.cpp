#include <iostream>
using namespace std;

class MyClass{
    public://Access specifier 'public'
        int myNum;//Attribute: Variables declared within the class
        string myString;//Attribute
};
class Car{
public:
    string brand;
    string model;
    int year;
};
int main(){
    MyClass myObj;

    myObj.myNum = 17;
    myObj.myString = "Hello";

    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;
    //Creating multiple object from same class (Car)
    Car carOne;

    carOne.brand = "BMW";
    carOne.model = "X5";
    carOne.year = 1999;

    Car carTwo;

    carTwo.brand = "Ford";
    carTwo.model = "Mustang";
    carTwo.year = 1969;

    cout << carOne.brand << " " << carOne.model << " " << carOne.year << endl;
    cout << carTwo.brand << " " << carTwo.model << " " << carTwo.year << endl;
    return 0;
}
