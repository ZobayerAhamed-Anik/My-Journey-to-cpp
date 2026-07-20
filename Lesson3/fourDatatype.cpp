#include <iostream>
int main()
{
    int age = 20; // integer
    double height = 5.8; //double
    char grade = 'A';
    bool passed = true;

    std::cout << "Age: " << age << "\n";
    std::cout << "Height: " << height << "\n";
    std::cout << "Grade: " << grade << "\n";
    std::cout << std::boolalpha <<"Passed: " << passed << "\n";

    return 0;
}