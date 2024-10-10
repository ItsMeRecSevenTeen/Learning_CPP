#include <iostream>
using namespace std;

int main(){
try{//Code block to be tested
    int age = 15;
    if(age >= 18){
        cout << "Access Granted - Your are old enough";
    } else {
        throw (age);//Throwing the age, If we do not know the 'throw' type in 'try' block, Write triple dot inside the parenthesis
                    //It will handle any type of exception
    }
}
catch(int myNum){//Catching the age, the data type must be the same as the variable that was trowed
    cout << "Access denied - You must be at least 18 year old \n";
    cout << "Age is: " << myNum;
}//If no error arises, the 'catch' block will be skiped
return 0;
}
