#include<iostream>

using namespace std;

int main(){
    int guess;
    int guesscount = 0;
    int guesslimit = 3;
    bool outofguess = false;
    int targetnum = 7;
    while(guess != targetnum && !outofguess){
        if(guesscount < guesslimit){
        cout << "Enter number : ";
        cin >> guess;
        guesscount++;
        }
        else{
            outofguess = true;
        }
    }
    if(outofguess){
        cout << "You lose";
    }
    else{
        cout << "You win !";
    }
    return 0;
}