#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1. Declare and initialize a vector
    vector<int> vec = {10, 20, 30, 40, 50};

    // 2. Adding elements to the vector
    vec.push_back(60);  // Adds 60 to the end
    vec.emplace_back(70); // Adds 70 to the end, faster than push_back

    // 3. Insert elements
    vec.insert(vec.begin() + 2, 25); // Inserts 25 at index 2
    vec.insert(vec.begin() + 1,2,10);
    vector<int> cpy(2,4);
    vec.insert(vec.begin(),cpy.begin(),cpy.end()); //2,4,10,20,30...
    // 4. Remove elements
    vec.erase(vec.begin() + 3); // Removes element at index 3
    
    vec.erase(vec.begin() + 1,vec.begin() + 4); //[start,end) elements are removed
    // 5. Access elements
    cout << "Element at index 1: " << vec[1] << endl; // Using [] operator
    cout << "Element at index 2: " << vec.at(2) << endl; // Using at() function

    // 6. Size and capacity
    cout << "Size: " << vec.size() << endl; // Current size of vector
    cout << "Capacity: " << vec.capacity() << endl; // Current allocated capacity

    // 7. Check if vector is empty
    if (!vec.empty()) {
        cout << "Vector is not empty." << endl;
    }

    // 8. Resize the vector
    vec.resize(8, 100); // Resizes to 8 elements, new elements initialized to 100

    // 9. Front and back elements
    cout << "Front element: " << vec.front() << endl;
    cout << "Back element: " << vec.back() << endl;

    // 10. Pop element from the end
    vec.pop_back(); // Removes last element

    // 11. Clear the vector
    vec.clear(); // Removes all elements
    cout << "Size after clear: " << vec.size() << endl;
    vector<int> vec2;
    swap(vec,vec2);
    vec.swap(vec2);
    vec.clear();
    return 0;
}
