#include <iostream>
#include <set>

using namespace std;

int main() {
    // Declare a set of integers
    set<int> mySet;

    // Insert elements into the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(10); // Duplicate elements are ignored

    // Display the elements of the set
    cout << "Set elements: ";
    for (int elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;

    // Check if an element exists using find()
    int searchElement = 20;
    if (mySet.find(searchElement) != mySet.end()) {
        cout << searchElement << " is found in the set." << endl;
    } else {
        cout << searchElement << " is not in the set." << endl;
    }

    // Erase an element from the set
    mySet.erase(20);
    auto it1 = mySet.find(10);
    auto it2 = mySet.find(30);
    mySet.erase(it1,it2);//[start,end)
    cout << "Set after erasing 20: ";
    for (int elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;

    // Get the size of the set
    cout << "Size of the set: " << mySet.size() << endl;

    // Check if the set is empty
    if (mySet.empty()) {
        cout << "Set is empty." << endl;
    } else {
        cout << "Set is not empty." << endl;
    }

    // Clear the set
    mySet.clear();
    cout << "Set cleared. Size: " << mySet.size() << endl;

    return 0;
}
