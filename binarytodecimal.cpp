#include<iostream>

using namespace std;

int main(){
    int num,mul = 1,rem,ans = 0;
    cout << "Enter Binary number : ";
    cin >> num;
    while(num != 0){
        int k = num % 10; //remainder
        num  /= 10;// number ko divide kar do
        ans += k * mul; //ans
        mul *= 2; // multiplier
    }
    cout << "Decimal version is : " << ans;
    return 0;
}