#include<iostream>

using namespace std;
class book{
    public:
    string name;
    string author;
    int pages;
    float price;
    book(){
        name = "NO NAME";
        author = "NO AUTHOR";
        pages = 0;
        price = 0;


    }
    book(string aname,string aauthor,int apages,float aprice ){
       name = aname;
       author = aauthor;
       pages = apages;
       price = aprice;  
    }
};
int main(){
    book book1("Concepts of Physics","HC Verma",650,650);
    cout << book1.name << endl;
    cout << book1.pages << endl;
    return 0;
}