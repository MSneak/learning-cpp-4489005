// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::cout << "Hi whats your first name " << std::flush;
    std::string str; 
    std::cin >> str;
    std::cout << "whats your second name " << std::flush;
    std::string str2;
    std::cin >> str2;
    std::cout << "glad to meet you, " << str << " " << str2 << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
