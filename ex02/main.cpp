#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "'str' memory address: " << &str << std::endl;
    std::cout << "'pointer' memory address: " << &stringPTR << std::endl;
    std::cout << "'reference' memory address: " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "'str' value: " << str << std::endl;
    std::cout << "'pointer' value pointed: " << *stringPTR << std::endl;
    std::cout << "'reference' value pointed: " << stringREF << std::endl;

    return 0;
}
