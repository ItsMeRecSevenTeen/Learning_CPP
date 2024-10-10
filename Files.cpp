#incluse <iostream>
#include <fstream>//Header file to work with files, This allows us to create, read and write Files
using namespace std;

int main(){
//Creating Files
ofstream MyFile("filename.txt");//This creates a file with the name between "Double quotes"
MyFile << "Files can be tricky, but it is fun enough!";//Write to the file
MyFile.close();//Close the File, It is considered a good practice and cleans the unnecessary memory space
//Reading Files
fstream MyReadFile("filename.txt");//Read from the text file, The name must be in "double quotes" as argument in the method
while(getline(MyReadFile, myText)){//the While loop reads the file line by line
    cout << myText;//Output the text from the file
}
    MyReadFile.close();//Closing the file
return 0;
}

