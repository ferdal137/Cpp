#include <iostream>  //Header file library that lets us work with input and output objects
using namespace std;  //Means that we can use names for objects and variables from the standard library.

int main(){

    // For comments

    /*
    For extense comments 
    with more that 1 line
    */


    //Types of variables

    int integer = 7;
    double decimal = 6.99;
    float large_decimal = 6.9999999999999999;
    char character = "D";
    string text = "Hello World";
    bool my_bool = true; 

    int x = 10, y = 5, z = 2;

    const float pi = 3.1416;  //A constant is a variable that can not chance its value 

    float f1 = 35e3;      //Power of 10
    double d1 = 12E4;

    //Console Output

    cout << "Hello World" << endl;
    cout << "I am learning C++ \n";
    std::cout<<"Hello World";           //Without the "using namespace std"

    cout << integer;
    cout << "My favorite number is" << integer << "because...";

    //Console Input

    cout << "Type a number";
    cin >> integer;
    cout << "Your number is " << integer;

    /* Arithmetic Operators

    +	Addition
    -	Subtraction		
    *	Multiplication	
    /	Division	
    %	Modulus	
    ++	Increment		
    --	Decrement	

    */

    
    

    return 0;
}


