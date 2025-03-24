#include<iostream>

using namespace std;

class book{
    public:
    string name;
    string author;
    int pages;
    float price;
};
int main(){
    book book1,book2;
    book1.author = "HC Verma";
    book1.name = "Concepts of Physics";
    book1.pages = 500;
    book1.price = 650;

    
    book2.author = "Acharya Prashant";
    book2.name = "Nishkam Karmyog";
    book2.pages = 250;
    book2.price = 300;
    cout << book2.author<< endl;
    cout << book1.author<< endl;
    return 0;
}