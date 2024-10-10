#include <iostream>
using namespace std;
//Syntax
class MyClass{// The Class
public:// Access Specifier
    MyClass(){//This is a constructor, a special method to create an object from a class, always public and does not return values
    cout << "Hello World!" << endl;
    }
};
//Example
class Car{
public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z){//Declaration and Definition
        brand = x;
        model = y;
        year = z;
    }
};
class Carr{
public:
    string brand;
    string model;
    int year;
    Carr(string x, string y, int z);//ONLY Constructor Declaration
};
Carr::Carr(string x, string y, int z){//ONLY Definition
    brand = x;
    model = y;
    year = z;
}

int main(){
    MyClass myObj;//Create an object from class MyClass, calling the constructor
    Car myCar1("BMW", "X5", 1999);//Giving values to the Class Constructor
    Car myCar2("Ford", "Mustang", 1969);
    //Car myCar3();
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;
    //cout << myCar3.brand << " " << myCar3.model << " " << myCar3.year << endl; An error will occur if we create an empty object
return 0;
}
