#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    
    // Inserting elements at front and rear
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(2);
    
    cout << "Front element: " << dq.front() << endl;
    cout << "Rear element: " << dq.back() << endl;
    
    // Removing elements from front and rear
    dq.pop_front();
    dq.pop_back();
    
    cout << "Front element after pop: " << dq.front() << endl;
    cout << "Rear element after pop: " << dq.back() << endl;
    
    // Checking if deque is empty
    if (dq.empty()) {
        cout << "Deque is empty!" << endl;
    } else {
        cout << "Deque is not empty!" << endl;
    }
    
    // Deque size
    cout << "Deque size: " << dq.size() << endl;
    
    return 0;
}
