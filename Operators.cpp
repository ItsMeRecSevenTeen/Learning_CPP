#include <iostream>
using namespace std;

int main(){
//Arithmetic Operators
int sum1 = 17 + 18;//Addition
int min1 = 5 - 9;//Subtraction
int mul1 = 9 * 2;//Multiplication
int div1 = 8 / 2;//Division
int mod1 = 2 % 10;//Modulus
int inc1++;
int dec1--;
//Assignment Operators
int x = 10; //Normal Assignment
y += 5; // Addition Assignment Same As y = y + 5
y -= 5; //Subtraction Assignment Same As y = y - 5
y *= 5; //Multiplication Assignment Same As y = y * 5
y /= 5; //Division Assignment Same As y = y / 5
y %= 5; //Modulus Assignment Same As y = y % 5
y &= 5; //AND Assignment Same As y = y & 5
y |= 5; //OR Assignment Same As y = y | 5
y ^= 5; //XOR Assignment Same As y = y ^ 5
y >>= 5; //Right Displacement Assignment Same As y = y >> 5
y <<= 5; //Left Displacement Assignment Same As y = y << 5
//Comparison Operators
int r = 6;
int z = 4;
cout << (r == z);
cout << (r != z);
cout << (r > z);
cout << (r < z);
cout << (r >= z);
cout << (r <+ z);
//Logical Operators
cout << (r < 7 && r > 2);
cout << (r < 7 || r > 2);
cout << !(r < 7 && r > 2);
return 0;
}
