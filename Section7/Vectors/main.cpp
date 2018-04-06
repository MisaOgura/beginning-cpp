#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> test_scores {90, 83, 100, 69, 72};
    
    cout << "\nTest scores in vector!" << endl;
    
    cout << "The size of the vector is: " << test_scores.size() << endl;
    cout << "Test score at 0 index: " << test_scores.at(0) << endl;
    cout << "Test score at 1 index: " << test_scores[1] << endl;
    cout << "Test score at 5 index: " << test_scores[5] << endl; // no bound checking
    // cout << "Test score at 5 index: " << test_scores.at(5) << endl; // bound checking --> throw an error
    
    cout << "Enter a test score to add: ";
    int score_to_add {0};
    cin >> score_to_add;
    
    test_scores.push_back(score_to_add);
    cout << "Test score added is: " << test_scores.at(5) << endl;
    
    // 2D vector
    vector <vector <int>> movie_rating {
        {1, 2, 3, 4},
        {2, 3, 1, 3},
        {4, 5, 2, 4}
    };
    
    // expect 1
    cout << "The score that second reviewer gave to movie no. 3 is: " << movie_rating.at(1).at(2) << endl;
    return 0;
}