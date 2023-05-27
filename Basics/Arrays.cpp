#include <iostream>
using namespace std;

int main(){

    string cars[] = {"Volvo", "BMW", "Ford", "Mazda"};
    int myNum[3] = {10, 20, 30};

    cout << cars[1];             //Get an element
    cout << "\n";
    cout << sizeof(myNum);
    cout << "\n";

    string letters[2][4] = {
    { "A", "B", "C", "D" },      //Multi-Dimensional Arrays      
    { "E", "F", "G", "H" }
    };

    cout << letters[0][2]; 


}