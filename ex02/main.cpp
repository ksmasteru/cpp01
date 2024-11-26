#include <string>
#include <iostream>

int main()
{
     std::string Brain = "HI THIS IS BRAIN";
     std::string *stringPTR = &Brain;
     std::string& stringREF = Brain;

    std::cout << "the memory address of string : "<< &Brain << std::endl;
    std::cout << "the memory address held by stringPTR : " << stringPTR  << std::endl;
    std::cout << "the memory address held by stringREF : " << &stringREF << std::endl;

    std::cout << "the value of the Brain string : " << Brain << std::endl;
    std::cout << "the value pointed to by stringPTR " << *stringPTR << std::endl;
    std::cout << "the value pointed to by stringREF " << stringREF << std::endl;
}
