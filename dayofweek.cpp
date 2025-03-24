#include<iostream>
using namespace std;

string getdayofweek(int daynum){
      string day;
      switch(daynum){
        case 0:
        day = "Sunday";
        break;
        case 1:
        day = "Monday";
        break;
        case 2:
        day = "Tuesday";
        break;
        case 3:
        day = "Wednesday";
        break;
        case 4:
        day = "Thursday";
        break;
        case 5:
        day = "Friday";
        break;
        case 6:
        day = "Saturday";
        break;
        default:
        day = "Invalid Input";

      }
      return day;
}
int main(){
    int num;
    cout << "Enter a number from 0 to 6 : ";
    cin >> num;
    cout << "Day is : " << getdayofweek(num);
    return 0;
}