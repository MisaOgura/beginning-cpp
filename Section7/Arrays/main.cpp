#include <iostream>

using namespace std;

int main() {
    char vowels [] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is " << vowels[0] << endl;
    cout << "The last vowel is " << vowels[4] << endl;

    // cin >> vowels[5]; // out of bounds!

    cout << &vowels << endl;
    return 0;
}