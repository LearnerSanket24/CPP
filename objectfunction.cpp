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
    bool cheapornot(){
        if(price > 500){
            return false;
        }
        else{
            return true;
        }
    }
};
int main(){
    book book1("Concepts of Physics","HC Verma",650,400);
    book book2("Harry Potter","JK Rowling",650,650);
    cout << book1.name << endl;
    cout << book1.pages << endl;
    cout << book1.cheapornot() << endl;
    cout << book2.cheapornot() << endl;

    return 0;
}