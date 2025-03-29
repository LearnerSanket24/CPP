#include<iostream>

using namespace std;
int binarysearch(int a[],int size,int key){
      int start = 0,end = size - 1,mid;
      while(start <= end){
        mid = start + ((end - start)/2);
        if(a[mid] == key){
            return mid;
            break;
        }
        if(a[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
      }
      return -1;
}
int main(){
    int n,key;
    cout << "Enter size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter elements : ";
    for(int i = 0; i < n; i++){
        cin >>a[i];
    }
    cout << "Enter target element : ";
    cin >> key;
    cout << binarysearch(a,n,key);
    return 0;
}