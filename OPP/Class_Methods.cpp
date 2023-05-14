//Methods are functions that belongs to the class.

//There are two ways to define functions that belongs to a class:

//  = Inside class definition
//  = Outside class definition

#include <iostream>
using namespace std;

//Method/function definition inside the class
class MyClass {        // The class
  public:              // Access specifier
    void myMethod_Out();
    void myMethod_In() {  // Method/function defined inside the class
      cout << "Inside";
    }
};

//Method/function definition outside the class
void MyClass::myMethod_Out() {
  cout << "\nOutside";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod_In();  // Call the method
  myObj.myMethod_Out();
  return 0;
}
