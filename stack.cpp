#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    
    // Pushing elements
    st.push(10);
    st.push(20);
    st.push(30);
    
    cout << "Top element: " << st.top() << endl;
    
    // Popping element
    st.pop();
    cout << "Top element after pop: " << st.top() << endl;
    
    // Checking if stack is empty
    if (st.empty()) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack is not empty!" << endl;
    }
    
    // Stack size
    cout << "Stack size: " << st.size() << endl;
    stack<int> st2;
    swap(st2,st);
    st.swap(st2);
    
    return 0;
}
