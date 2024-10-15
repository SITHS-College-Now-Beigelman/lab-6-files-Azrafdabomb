// Azraf Hossain
// Worked with Halimatou Diaby
// Lab 6
// 10.15.24

#include <iostream>
#include <string> 
#include <iomanip>
#include <cstdlib> 
#include <fstream> // New library, used to read and write in files outside of this program

using namespace std; // required
 
int main () // fuction where the code can run
{
    // defining of our variables
    int integer1;
    int integer2;
    char charr;
    string stringg;

    // Step 2: Declare an ifstream & ofstream variables
    ifstream inFile; 
    ofstream outFile;
    // Step 3: Open the files
    inFile.open("inData.txt");
    outFile.open("outData.txt");
    
    // here, the inFile >> ... code reads our input file, the inData.txt file
    // the outFile << ... code outputs the sum of the two integers read in the input file
    inFile >> integer1 >> integer2;
    outFile << integer1 + integer2 << endl;

    // inFile reads the character
    // outFile prints out the ASCII value of the character selected, then adds one to represent the next ASCII number
    inFile >> charr;
    outFile << charr + 1 << endl;

    // inFile reads the string
    // ouFile outputs it
    inFile >> stringg;
    outFile << stringg << endl;

    // Last step to close the file
    inFile.close();
    outFile.close();
}

/*
80
83
Howdy!
*/