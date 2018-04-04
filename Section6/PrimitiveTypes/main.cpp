#include <iostream>
#include <math.h>

using namespace std;

int main() {
    // Character
    char favourite_letter {'M'};
    cout << "My favourite letter is " << favourite_letter << " :)" << endl;
    
    // what about multi characters?
//    wchar_t initials {'MO'};
//    cout << "My initials are " << initials << endl;


    // Integer
    unsigned short int age {29};
    cout << "I am " << age << " years old!" << endl;
    
    int countries_represented {90};
    cout << "There were " << countries_represented << " countries repretented" << endl;
    
    long people_in_england {53'010'000};
    cout << "There are about " << people_in_england << " people living in England" << endl;
    
    long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " people on earth" << endl;
    
    long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;
    
    
    // Floating point
    float car_payment {402.34};
    cout << "My payment is " << car_payment << endl;
    
    double pi {3.14159};
    cout << "Pi is " << pi << endl;
 
    double large_amount {2.7e120};
    cout << large_amount << " is very large" << endl;
    cout << "size is " << sizeof large_amount << endl;
    
    bool is_large {large_amount > pow(2, 64)};
    cout << is_large << endl;
    
    // Boolean
    bool game_over {false};
    cout << "The value of game_over is " << game_over << endl;
    
    
    // Overflow
    short val1 {30000};
    short val2 {1000};
    // short product {val1 * val2}; // gives a compiler error
    int product {val1 * val2};
    
    cout << "The product of " << val1 << " and " << val2 << " is " << product << endl;
    
    return 0;
}