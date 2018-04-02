#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

int main() {
    int fav_num;
    cout << "Enter your favourite number between 1 and 100: ";
    cin >> fav_num;
    string output = "Amazing, " + to_string(fav_num) + " is my favourite number too!"; 
    cout << output << endl;
    
    return 0;
}