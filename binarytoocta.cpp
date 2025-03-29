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
    cout << "Decimal version is : " << ans << endl;
    int k = ans;
    int m = 0;
    int l = 1;
    while(k != 0){
        int j = k % 8; //num&1;
        m = m + j * l; 
        k /= 8;// num >>1;
        l *= 10;
    }
    cout << "Octa Version is : "<< m;
    
    return 0;
}