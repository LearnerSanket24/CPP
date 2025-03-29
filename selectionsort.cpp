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
    for(int i = 0; i < n - 1; i++){
           index = i;
           for(int j = i + 1; j < n ; j++){
            if(a[j] < a[index]){
                  index = j;
            }
            // int temp = a[index];
            // a[index] = a[i];
            // a[i] = temp;
            
           }
           swap(a[index],a[i]);

    }
    for(int k = 0 ; k < n ; k++){
        cout << a[k] << " ";
    }
    return 0;
}