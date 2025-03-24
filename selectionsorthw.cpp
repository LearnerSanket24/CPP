#include<iostream>

using namespace std;

int main(){
    int a[6];
    cout << "Enter Array of size 6 :";
    for(int i = 0 ; i < 6 ; i++){
        cin >> a[i];
    }
    int n = 6;
    int index = 0;
    for(int i = n - 1; i > 0 ; i--){
           index = 0;
           for(int j = n - 2 ; j >= 0 ; j--){
            if(a[j] > a[index]){
                  index = j;
                  swap(a[i],a[index]);
            }
            // int temp = a[index];
            // a[index] = a[i];
            // a[i] = temp;
           
           }

    }
    for(int k = 0 ; k < n ; k++){
        cout << a[k] << " ";
    }
    return 0;
}