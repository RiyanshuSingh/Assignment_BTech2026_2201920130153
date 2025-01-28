#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string title; 

public:
    virtual void setTitle(string s) = 0;
    string getTitle() 
    {
        return title;
    }
};

class MyBook : public Book {
public:
    void setTitle(string s) override {
        title = s;
    }
};

int main() {
    MyBook new_novel;
    string title;
    cout << "Enter the title: ";
    getline(cin, title);
    new_novel.setTitle(title);
    cout << "The title is: " << new_novel.getTitle() << endl;
    return 0;
}
