#include <iostream>  //Header file library that lets us work with input and output objects
#include <cmath>     //Math library
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
    cout << "\t I am learning C++ \n";
    std::cout<<"Hello World";           //Without the "using namespace std"

    cout << integer;
    cout << "My favorite number is" << integer << "because...";

    //Console Input

    cout << "Type a number";
    cin >> integer;
    cout << "Your number is " << integer;

    /* 
    Arithmetic Operators
    +	Addition
    -	Subtraction		
    *	Multiplication	
    /	Division	
    %	Modulus	
    ++	Increment		
    --	Decrement	

    Comparison Operators
    ==	Equal to		
    !=	Not equal	
    >	Greater than	
    <	Less than	
    >=	Greater than or equal to	
    <=	Less than or equal to	

    Logical Operators
    && 	Logical and		
    || 	Logical or		
    !	Logical not		
    */

    /* 
    Math Functions

    abs(x)       acos(x)       asin(x)        atan(x)	        cbrt(x)	
    ceil(x)	     cos(x)        cosh(x)        exp(x)	        expm1(x)
    fabs(x)      fdim(x, y)    floor(x)       hypot(x, y)	    fma(x, y, z)
    fmax(x, y)   fmin(x, y)    fmod(x, y)     log(x)            pow(x, y)
    round(x)     sin(x)        sinh(x)        sqrt(x)           tan(x)          tanh(x)	
    */


    // CONDITIONALS
    int time = 22;

    if (time < 10) {
        cout << "Good morning.";
    } else if (time < 20) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }
    
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;
    
    
    return 0;
}


