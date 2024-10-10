#include <iostream>
using namespace std;

int main(){
//Creating Arrays
string cars[4] = {"Volvo","BMW","Ford","Mazda"};
int myNum[3] = {10, 20, 30};
//Accessing Arrays
cout << cars[0];
//Changing Array's values
cars[0] = "Ferrari";
cout << cars[0];
//Loop through an Array
for(int i = 0; i < 4; i++){//Displays each element of the array cars
    cout << cars[i] << "\n";
}
for(int i = 0;i < 4; i++){
    cout << i << "=" << cars[i] << "\n";//Displays each element with their index of the array cars
}
int myNumbers[5]= {17, 14, 7, 13, 18};
for(int i = 0;i < 5;i++){
    cout << myNumbers[i] << "\n";
}
//foreach Loop
for(int i : myNumbers){
    cout << i << "\n";
}
//Omitting Array Size
string namesOne[] = {"Rich", "Rec", "Dan"};//These two lines do the same thing
string namesTwo[3] = {"Rich", "Rec", "Dan"};//But this is the best way, it is a good practice
string namesThree[3];//We can declare an Array and assign it's values later
namesThree[0]="Rich";
namesThree[1]="Rec";
namesThree[2]="Dan";
//Getting the size of an Array
int myNumbersOne[5] = {15, 16, 17, 18, 19};
cout << sizeof(myNumbersOne) << endl;//sizeof return the Array's size in BYTES
cout << sizeof(myNumbersOne) / sizeof(int);// This line shows the size of the array , we must divide the array's bytes by the
                                            //type of data contains if we want to find out the real array's size
for(int i = 0; i < (sizeof(myNumbersOne) / sizeof(int); i++)){//The best way for work with arrays of any sizes
    cout << myNumbersOner[i] << "\n";
}
for(int i : myNumbersOne){
    cout << i << "\n";
}
//Multi-Dimensional Arrays
string letters[2][4] = { // {{ "A", "B", "C", "D"},{ "E", "F", "G", "H"}}; [rows] [cols]
    { "A", "B", "C", "D"},
    { "E", "F", "G", "H"}
};
string lettersOne[2][2][2] = {// {{{"A", "B"},{"C", "D"}},{{"E", "F"},{"G", "H"}}}; An array of Three dimensions
    {
        {"A", "B"},
        {"C", "D"}
    },
    {
        {"E", "F"},
        {"G", "H"}
    }
};
//Accessing the elements of a Multi-Dimensional Array
cout << letters[0][2];//Displays "C"
//Changing elements in a Multi-Dimensional Array
letters[0][0] = "Z";
cout << letters[0][0];//Displays "Z"
for(int i = 0; i < 2 ; i++){
    for(int j = 0; j < 4; j++){
        cout << letters[i][j] << "\n";
    }
}
for(int i = 0 ; i < 2; i++){
    for(int j = 0; j < 2; i++){
        for(int k = 0; k < 2; k++ ){
           cout << lettersOne [i][j][k] << "\n";
        }
    }
}
return 0;
}
