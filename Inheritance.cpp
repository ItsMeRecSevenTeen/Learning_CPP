#include <iostream>
using namespace std;

class Vehicle{//Base Class or Parent
public:
    string brand = "Ford";
    void honk(){
        cout << "Tuut, Tuut! \n";
    };
};
class Car: public Vehicle{//Car is inheriting attributes and methods from Vehicle //Derived Class or Child
public:
    string model = "Mustang";
};
//Multilevel Inheritance
class MyClass{//Parent class
public:
    void myFunction(){
    cout << "This code line comes from the parent class" << endl;
    }
};
class MyChild: public MyClass{
};
class MyGrandChild: public MyChild{
};
//Multiple Inheritance
class MyOtherClass{//Base Class
public:
    void myOtherFunction(){
    cout << "This code line come from the other class" << endl;
    }
};
class MyChildClass: public MyClass, public MyOtherClass{//A class can be inherited from more than one base class separating by commas
};
//Access Specifiers
class Employee{
protected://ONLY inherited classes can access to protected attributes
int salary;
};
class Programmer : public Employee{
public:
int bonus;
void setSalary(int s){
    salary = s;
}
int getSalary(){
return salary;
}
};
int main(){
//Inheritance
Car myCar;
myCar.honk();
cout << myCar.brand << " " << myCar.model << endl;
//Multilevel Inheritance
MyGrandChild myObj;
myObj.myFunction();
//Multiple Inheritance
MyChildClass myObjMultipInherit;
myObjMultipInherit.myFunction();
myObjMultipInherit.myOtherFunction();
//Inheritance Access
Programmer myProgramObject;
myProgramObject.setSalary(50000);//setSalary() is allowed to change the value of 'Salary' Attribute, because is inherited
myProgramObject.bonus = 10000;
//myProgramObject.salary = 10;//Does not allows to change the values of Salary attribute, because main() is not inherited
//myProgramObject.bonus = 10;//It allows to us to change it's value, Because 'bonus' is public
return 0;
}
