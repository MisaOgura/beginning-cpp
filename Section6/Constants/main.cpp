#include <iostream>

using namespace std;

int main() {
    cout << "Hello! This is Misa's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned? ";
    
    int number_of_rooms {0}; // best practice to INITIALISE it
    cin >> number_of_rooms;
    
    const double price_per_room {30.0};
    const double sales_tax {0.06};
    const int expiry_length {30}; // days
    
    double cost {price_per_room * number_of_rooms};
    double tax {cost * sales_tax};
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "=======================================" << endl;
    cout << "Total estimate: $" << cost + tax << endl;
    cout << "This estimate is valid for " << expiry_length << " days" << endl;
    
    return 0;
}