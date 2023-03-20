#include "Reverser.h"

#include <string>
#include <iostream>
using namespace std; 

int Reverser::reverseDigit(int value){
    int digits;

    if (value < 0) // Base case
    {
        return -1;
    } else if (value < 10){
        return value;
    }
    else {
        cout << value % 10;
        return reverseDigit(value/10);
    }
}

string Reverser::reverseString(string characters){
    
    if (characters.length() <= 1) // Base case
    {
        return characters;
    } else { 
        return reverseString(characters.substr(1)) + characters[0];
}