#include <iostream>

int main() {
    int fav_num;
    std::cout << "Enter your favourite number between 1 and 100: ";
    std::cin >> fav_num;
//    std::string output = "Amazing, " + std::to_string(fav_num) + " is my favourite number too!"; 
//    std::cout << output << std::endl;
    std::cout << "Amazing, " << fav_num << " is my fav number too!" << std::endl;
    
    return 0;
}