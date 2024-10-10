#include <iostream>
using namespace std;

int main(){
//Switch Structure
int day = 7;
switch (day){
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Code to be displayed if there\'s no match";
}
//While Structure
int i = 0;
while(i<5){
    cout << i <<"\n";
    i++;
}
//do-while Structure
int j = 0;
do{
    cout << j << "\n";
    j++;
}while(j < 5);
//for Structure
for(int k = 0; k < 5; k++){
    cout << i << "\n";
}

for(int i= 0; i < 10; i++){//Nested for
    cout << "Outer: " << i << "\n";
    for(int j = 0; i < 10; i++){
        cout << "Inner: " << j << "\n";
    }
}

int myNumbers[5] = {10, 20, 30, 40, 50};
for(int i : myNumbers){//foreach loop
    cout << i << "\n";
}
//Continue and break statement
for(int i = 0; i < 10;){
    if(i == 4){//Number 4 will be skiped by the continue statement, It breaks one iteration BUT will continue the loop
        //break;
        continue;
    }
    cout << i << "\n";
}
int r = 0;
while(r <10){
    if(r == 4){
        //r++; with continue
        //break;
        continue;
    }
    cout << r << "\n ";
    i++;
}
return 0;
}
