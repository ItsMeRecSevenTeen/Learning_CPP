#include <iostream>
using namespace std;

class MyClass{//Class
public://Access Specifier
    void myMethod(){//Method or Function declared and defined inside the class
        cout << "Hello World!";
    }

};

class MyOtherClass{
public:
    void myMethod();//ONLY function Declaration
};

void MyOtherClass::myMethod(){//Function Definition outside of it's class
    cout << "Hello World";
}
class Car{
public:
    int speed(int maxSpeed){//Also, We can add parameters into functions
        return maxSpeed;
    }
};

int main(){
    MyClass myObj;
    myObj.myMethod();
    Car myCar;
    cout << myCar.speed(200)<< endl;
return 0;
}
