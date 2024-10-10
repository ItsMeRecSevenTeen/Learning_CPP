#include <iostream>
using namespace std;

int main(){
string food = "Pizza";
string &meal = food;
string &ration = meal;
cout << food << "\n";
cout << meal << "\n";
cout << ration << "\n";
//Memory Address
cout << &food;//We can access to the Memory Access with & operator at the left's variable name
//Pointers
string* ptr = &food;//This is the preferred way to store a variable's memory address
                    //& operator gets the Memory Address, and we must store it in a pointer of the same data type than the main variable
//Dereferencing
cout << ptr << "\n";//Reference operation, This displays the MEMORY ADDRESS of 'food' with the pointer (0x6dfed4)
cout << *ptr << "\n";//Dereference operation, This display the VALUE of 'food' with the pointer (Pizza)
                    /*Note: The * operator does two different things:
                    If we use it in Declaration, we are creating a pointer (string* ptr)
                    If we don't use it in Declaration, it act as a dereference operator*/
//Modifying Pointers
cout << food << "\n";//First Value of 'food' (Pizza)
cout << &food << "\n";//Output the Memory Address of 'food' (0x6dfed4)
cout << *ptr << "\n";//Access the memory address of 'food' and prints the Value
*ptr = "Hamburger";//If we change the pointer's value, it will change the original variable
cout << *ptr << "\n";//Dereference
cout << food << "\n";//New Value of 'food' (Pizza)
return 0;
}
