#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "There are " << vector1.size() << " elements in vector1" << endl;
    cout << "The element at index 0 is: " << vector1.at(0) << endl;
    cout << "The element at index 1 is: " << vector1.at(1) << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "\nThere are " << vector2.size() << " elements in vector2" << endl;
    cout << "The element at index 0 is: " << vector2.at(0) << endl;
    cout << "The element at index 1 is: " << vector2.at(1) << endl;
    
    vector <vector <int>> vector_2d;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "\nThere are " << vector_2d.size() << " elements in vector_2d" << endl;
    cout << "The element at (0, 0) is: " << vector_2d.at(0).at(0) << endl; // 10
    cout << "The element at (0, 1) is: " << vector_2d.at(0).at(1) << endl; // 20
    cout << "The element at (1, 1) is: " << vector_2d.at(1).at(0) << endl; // 100
    cout << "The element at (1, 1) is: " << vector_2d.at(1).at(1) << endl; // 200
    
    vector1.at(0) = 1000;
    
    cout << "\nElements of the updated vector1" << endl;
    cout << "The element at index 0 is: " << vector1.at(0) << endl; // 1000
    cout << "The element at index 1 is: " << vector1.at(1) << endl; // 20

    cout << "\nElements of the updated vector_2d" << endl;    
    cout << "The element at (0, 0) is: " << vector_2d.at(0).at(0) << endl; // 10
    cout << "The element at (0, 1) is: " << vector_2d.at(0).at(1) << endl; // 20
    cout << "The element at (1, 1) is: " << vector_2d.at(1).at(0) << endl; // 100
    cout << "The element at (1, 1) is: " << vector_2d.at(1).at(1) << endl; // 200
    
    return 0;
}