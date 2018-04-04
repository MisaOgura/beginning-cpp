#include <iostream>

using namespace std;

int main() {
    cout << "Hello! Welcome to Misa's Carpet Cleaning Service!" << endl;
    cout << "We updated our pricing system, which is better suited for your needs :)" << endl;
    
    const double price_per_room_small {25.0};
    const double price_per_room_large {35.0};
    const double sales_tax {0.06};
    const int quote_expiry {30}; // days
    
    cout << "\nHow many SMALL rooms would you like cleaned? ";
    int num_of_rooms_small {0};
    cin >> num_of_rooms_small;
    
    cout << "\nHow many LARGE rooms would you like cleaned? ";
    int num_of_rooms_large {0};
    cin >> num_of_rooms_large;
    
    double cost_small_rooms {price_per_room_small * num_of_rooms_small};
    double cost_large_rooms {price_per_room_large * num_of_rooms_large};
    // ideally you would want to create a function that takes num of rooms and
    // price per room to calculate the cost for the given room type
    
    double cost {cost_small_rooms + cost_large_rooms};
    double tax {cost * sales_tax};    
    
    cout << "\nEstimate of carpet cleaning service" << endl;
    cout << "Number of small rooms: " << num_of_rooms_small << endl;
    cout << "Number of large rooms: " << num_of_rooms_large << endl;    
    cout << "Price per small room: $" << price_per_room_small << endl;
    cout << "Proce per large room: $" << price_per_room_large << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "============================================" << endl;
    cout << "Total estimate: $" << cost + tax << endl;
    cout << "Estimate is valid for " << quote_expiry << " days" << endl;

    return 0;
}