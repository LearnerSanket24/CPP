#include<iostream>

using namespace std;

int main(){
    int num,mul = 1,rem,ans = 0;
    cout << "Enter a Octa number : ";
    cin >> num;
    while(num != 0){
        int k = num % 10; //remainder
        num  /= 10;// number ko divide kar do
        ans += k * mul; //ans
        mul *= 8; // multiplier
    }
    cout << "Decimal version is : " << ans << endl;

     num = ans;
     ans = 0;
     mul = 1;
    while(num != 0){
        int k = num % 2; //num&1;
        ans = ans + k * mul; 
        num /= 2;// num >>1;
        mul *= 10;
    }
    cout << "Binary Version is : "<< ans;
    return 0;
}