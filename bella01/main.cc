#include <iostream>

int main(int argc, char ** argv)
{
    std::cout << "Hi, I'm Max. What's your name?" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Hello " << name << "!" << std::endl;
 
    return 0;
}
