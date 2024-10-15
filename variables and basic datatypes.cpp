#include <iostream>

int main()
{
    //int can only store an integer (whole number). If you use a decimal it will be truncated.
    int age; //declaration
    age = 18; //assignment
    int birthYear = 2006; //both declaration and assignment
    int sum = age + birthYear; //once again both declaration and assignment. 

    //use double instead if you want decimals.
    double gpa = 2.5;

    //the char datatype can only store one(1) single character
    //if you use multiple characters using char, only the final character will be stored and outputted.
    char grade = 'F';
    char initial = 'Y';
    char currency = '€'; //You can also use special characters. Make sure your terminal can display those characters.

    //booleans can only be true or false. look at it as if it's a light switch.
    bool student = true;
    bool broke = true;

    //a string is an object that represents a sequence of text.
    std::string name = "Yumiko";
    std::string address = "1600 Pennsylvania Avenue, N.W. Washington, DC 20500";
    
    //output what you learned
    std::cout << "My name is " << name << '\n';
    std::cout << "I am " << age << " years old." << '\n';
    std::cout << "I am born in " << birthYear << "." << '\n';
    std::cout << "I live at " << address << '\n';
    return 0;
}

