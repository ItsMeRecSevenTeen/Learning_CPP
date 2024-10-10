#include <iostream>
using namespace std;

//void myFunction(); //Declaration: We can declare the function as first
void myFunction(){//Declaration: return type, name and parameters (If any)
    cout << "I just got executed!";//Definition: Body of the function (Code to be executed)
}//We must not declare and define the User Function below of main() method, it will occur an error

void nameFunction(string fname){//fname is a parameter
    cout << fname << "Gomez\n";
}
void countries(string country = "Mexico"){//country is a optional parameter and "Mexico" is the default value
    cout << country << "\n";
}
void infos(string firstName, int age){
    cout << "First Name: " << firstName << " Age: " << age << endl;
}
int sums(int x, int y){//Function that accepts 2 parameters
    return x + y;
}
void swapNum(int &r, int &s){//Function Parameter Pass by reference (Memory address)
    int z = r; //Useful if we want to change the values of the arguments
    r = s;
    s = z;
}
void arrayFunction(int myNums[5]){
    for(int i = 0; i < 5 ; i++){
        cout << myNums[i] << "\n";
    }
}
int plusFunc(int x, int y){//Function overloading: Multiple function can have the same name, BUT, will have different types and quantity
     return x + y;             //of parameters
}
double plusFunc(double x, double y){//2 function with the same name, can return a different data-Type each one
    return x + y;
}
int main(){
int z;
myFunction();//A function can be called multiple times
myFunction();
myFunction();
nameFunction("Liam");//"Liam" is an argument
nameFunction("Rich");
nameFunction("Saul");
countries();//Default value is "Mexico"
countries("Russia");
countries("Norway");
infos("Rich",18);
infos("Dan",17);
cout << sums(10, 8) << endl;
z = sums(10, 8);
cout << z;
int a = 17, b = 18;
swapNum(a, b);//Pass By Reference
cout << a << " " << b;
int myNumbers[5] = {10, 20, 30, 40, 50};
arrayFunction(myNumbers);//If we want to give the array as argument, we must write the name of the array, not the square brackets sets
cout << plusFunc(10, 8) << endl;
cout << plusFunc(10.8, 7.2) << endl;
return 0;
}
/*
void myFunction(){ //Definition
    cout << "I just got executed!";
}*/
//Parameters and arguments
/*void functionName(parameter1, parameter2, parameter3){
    //code to be executed
}*/
