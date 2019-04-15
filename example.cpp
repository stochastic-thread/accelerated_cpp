#include <iostream>
#include <string>

int main()
{
    std::string fname;
    std::string lname; 
    std::cout << "Please enter your first name: ";
    std::cin >> fname;
    std::cout << "Please enter your last name: ";
    std::cin >> lname;

    const std::string greeting = "Welcome, " + fname + " " + lname + "!";
    std::cout << greeting << std::endl;
    return 0;
}
