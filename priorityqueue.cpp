#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Declaring a max-heap (default behavior of priority_queue)
    priority_queue<int> pq;
    
    // Pushing elements into the priority queue
    pq.push(10); // Inserts 10
    pq.push(30); // Inserts 30
    pq.push(20); // Inserts 20
    pq.push(5);  // Inserts 5
    
    // Accessing the top element (largest element in max-heap)
    cout << "Top element (max-heap): " << pq.top() << endl;
    
    // Removing the top element
    pq.pop(); // Removes the largest element (30)
    cout << "Top element after pop: " << pq.top() << endl;
    
    // Checking if the priority queue is empty
    if (pq.empty()) {
        cout << "Priority queue is empty!" << endl;
    } else {
        cout << "Priority queue is not empty!" << endl;
    }
    
    // Displaying the size of the priority queue
    cout << "Priority queue size: " << pq.size() << endl;
    
    // Declaring a min-heap using greater<int>
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    // Pushing elements into the min-heap
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    minHeap.push(5);
    
    // Accessing the top element (smallest element in min-heap)
    cout << "Top element (min-heap): " << minHeap.top() << endl;
    
    return 0;
}
