#include <iostream>
#include <list>

using namespace std;

int main() {
    // 1. Declare and initialize a list
    list<int> myList = {10, 20, 30, 40, 50};

    // 2. Adding elements to the list
    myList.push_back(60);  // Adds 60 to the end
    myList.push_front(5);  // Adds 5 to the beginning

    // 3. Insert elements at a specific position
    auto it = myList.begin();
    advance(it, 2); // Move iterator to the 3rd element
    myList.insert(it, 25); // Inserts 25 before the 3rd element

    // 4. Remove elements
    myList.erase(it); // Removes the element at the iterator position
    myList.remove(40); // Removes all occurrences of 40

    // 5. Accessing elements (via iteration as direct access is not available)
    cout << "List elements: ";
    for (auto val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // 6. Size of the list
    cout << "Size of list: " << myList.size() << endl;

    // 7. Checking if the list is empty
    if (myList.empty()) {
        cout << "List is empty." << endl;
    } else {
        cout << "List is not empty." << endl;
    }

    // 8. Front and back elements
    cout << "Front element: " << myList.front() << endl;
    cout << "Back element: " << myList.back() << endl;

    // 9. Sorting the list
    myList.sort(); // Sorts the list in ascending order
    cout << "Sorted list: ";
    for (auto val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // 10. Reversing the list
    myList.reverse(); // Reverses the list order
    cout << "Reversed list: ";
    for (auto val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // 11. Clearing the list
    myList.clear();
    cout << "Size after clearing: " << myList.size() << endl;

    return 0;
}
