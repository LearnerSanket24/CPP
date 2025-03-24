#include<iostream>

using namespace std;

int main(){
    int a = 90;
    int *p = &a;
    int **k = &p;
    cout << p << endl;
    cout << &a << endl; // printing address of a
    cout << *p << endl;
    cout << k << endl;
    cout << *k << endl;
    cout << **k << endl;
    cout << *&*&a << endl;
    return 0;
}