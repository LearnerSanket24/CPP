#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cout<< "Enter the number : ";
    cin >> num;
    int ans = 0;
    int m = 1;
    while(num != 0){
        int k = num % 2; //num&1;
        ans = ans + k * m; 
        num /= 2;// num >>1;
        m *= 10;
    }
    cout << "Binary Version is : "<<ans;
    return 0;
}