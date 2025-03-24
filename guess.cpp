#include<iostream>

using namespace std;

int main(){
    int guess;
    int targetnum = 7;
    while(guess != targetnum){
        cout << "Enter a num : ";
        cin >> guess;

    }
    cout << "You win !";
    return 0;
}