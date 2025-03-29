#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1. Declare and initialize a vector
    vector<int> vec = {10,20,30,40,50,60};
    vector<int>::iterator it = vec.begin();  // Correct
     it = vec.end(); // Correct
    vector<int>::reverse_iterator rit = vec.rbegin(); // Correct
    vector<int>::reverse_iterator rit_end = vec.rend(); // Correct
    // 2. Using iterators to traverse the vector
    cout << "Vector elements using iterators: ";
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " "; // Dereferencing iterator to access value
    }
    cout << endl;

    // 3. Using const_iterator to prevent modification
    cout << "Vector elements using const_iterator: ";
    for (vector<int>::const_iterator it = vec.cbegin(); it != vec.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 4. Using reverse_iterator to traverse in reverse order
    cout << "Vector elements in reverse order: ";
    for (vector<int>::reverse_iterator rit = vec.rbegin(); rit != vec.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    // 5. Using auto keyword for cleaner iterator syntax
    cout << "Vector elements using auto keyword: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    for(auto it : vec){
   cout << it << " ";
    }

    return 0;
}
