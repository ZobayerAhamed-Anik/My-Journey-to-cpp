#include <iostream>
int main(){
    char firstLetter;
    int age;
    int semester;
    double cgpa;

    std::cout << "Enter the first letter of your name: ";
    std::cin >> firstLetter;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your current semester: ";
    std::cin >> semester; 
      
    std::cout << "Enter your CGPA: ";
    std::cin >> cgpa;

    std::cout << "\n----- Information -----\n";
    std::cout << "First Letter: " << firstLetter << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Semester: " << semester << "\n";
    std::cout << "CGPA: " << cgpa << "\n";

    return 0;
}