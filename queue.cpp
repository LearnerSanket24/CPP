#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    
    // Pushing elements into the queue
    q.push(10); // Inserts 10 into the queue
    q.push(20); // Inserts 20 into the queue
    q.push(30); // Inserts 30 into the queue
    
    // Accessing the front and rear elements
    cout << "Front element: " << q.front() << " (First element inserted)" << endl;
    cout << "Rear element: " << q.back() << " (Most recently inserted)" << endl;
    
    // Removing an element from the front of the queue
    q.pop(); // Removes the front element (10)
    cout << "Front element after pop: " << q.front() << " (Next in line)" << endl;
    
    // Checking if the queue is empty
    if (q.empty()) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue is not empty!" << endl;
    }
    
    // Displaying the size of the queue
    cout << "Queue size: " << q.size() << " (Number of elements in queue)" << endl;
    
    return 0;
}
