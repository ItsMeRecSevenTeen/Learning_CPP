#include <iostream>
using namespace std;

int main(){
struct{ //Structure Declaration
    int myNum;// int Member Variable
    string myString();// string Member Variable
}myStructure;//Structure variable
//Accessing Structure Members
myStructure.myNum = 1;// Assign values to members of myStructure
myStructure.myString = "Hello there!";
cout << myStructure.myNum << "\n";
cout << myStructure.myString << "\n";
//Using one structure in multiple Variables
struct{
    int myNumber;
    string myStringer;
} myStruct1, myStruct2, myStruct3;//These variables has the same Variable Members like myNumber and my Stringer
struct{
    string brand;
    string model;
    int year;
} myCar1,myCar2; //Variables separated in comma, those variables will have the same Variable Members
myCar1.brand = "BMW";//Putting data into the first structure
myCar1.model = "X5"
myCar1.year = 1999;

myCar2.brand = "Ford";//Putting data into the first structure
myCar2.model = "Mustang";
myCar2.year = 1969;
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
//Named Structures
struct myDataType{//Structure named "MyDataType"
    int myNum;
    string myString;
};
myDataType myOwnVar;//Creating a variable with our own structure, using first the name of the structure as the type of the var
struct car{
    string brand;
    string model;
    int year;
};
car myCarr1;//Creating a car structure and storing it in myCarr1
myCarr1.brand = "BMW";//Putting data in myCarr2
myCarr1.model = "X5";
myCarr1.year = 1999;

car myCarr2;//Creating a car structure and storing it in myCarr2
myCarr2.brand = "Ford";//Putting data in myCarr2
myCarr2.model = "Mustang";
myCarr2.year = "1969";
cout << myCarr1.brand << " " << myCarr1.model << " " << myCarr1.year << "\n";//Printing the structure models
cout << myCarr2.brand << " " << myCarr2.model << " " << myCarr2.year << "\n";
return 0;
}
