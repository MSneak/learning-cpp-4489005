// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::cout << "Hi whats your name " << std::flush;
    std::string str; 
    std::cin >> str;
    std::cout << "glad to meet you, " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
