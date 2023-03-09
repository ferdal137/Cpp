//WARNING
//If you try to execute this C++ script will have a lot of erros
//The intention of this code is only show you the basics sintax of C++ 

#include <iostream>  //Header file library that lets us work with input and output objects
#include <cmath>     //Math library
#include <string>    //String library

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

    //Arrays
    string cars[] = {"Volvo", "BMW", "Ford", "Mazda"};
    int myNum[3] = {10, 20, 30};

    cout << cars[1];             //Get an element
    cout << sizeof(myNum);

    string letters[2][4] = {
    { "A", "B", "C", "D" },      //Multi-Dimensional Arrays      
    { "E", "F", "G", "H" }
    };
    cout << letters[0][2]; 


    //Structs
    
    struct {             // Structure declaration
    int myNum;         // Member (int variable)
    string myString;   // Member (string variable)
    }myStructure;       // Structure variable

    // Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // Print members of myStructure
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";


    //References

    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza
    cout << &food; // Outputs 0x6dfed4

    //Pointers

    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    cout << food << "\n";   // Output the value of food (Pizza)
    cout << &food << "\n";  // Output the memory address of food (0x6dfed4)
    cout << ptr << "\n";    // Output the memory address of food with the pointer (0x6dfed4)
        
    *ptr = "Hamburger"; // Output the memory address of food with the pointer (0x6dfed4)
    cout << *ptr << "\n";   // Output the new value of the pointer (Hamburger)


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
    round(x)     sin(x)        sinh(x)        sqrt(x)           tan(x)           tanh(x)	
    */


    // CONDITIONALS
    int time = 22;

    if (time < 10) {
        cout << "Good morning";
    } else if (time < 20) {
        cout << "Good day";
    } else {
        cout << "Good evening";
    }
    
    string result = (time < 18) ? "Good day" : "Good evening";  //Ternary Operator(Short Hand If...Else)
    cout << result;
    
    // SWITCH
    int day = 4;

    switch (day) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    }

    //WHILE
    int i = 0;

    while (i < 5) {
    cout << i << "\n";
    i++;
    }

    //LOOPS

    //DO WHILE
    int i = 0;

    do {
    cout << i << "\n";
    i++;
    }
    while (i < 5);

    //FOR
    for (int i = 0; i < 5; i++) {
    cout << i << "\n";
    }



    return 0;
}


