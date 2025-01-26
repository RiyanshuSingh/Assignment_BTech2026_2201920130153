#include <iostream>
using namespace std;

class Animal {
public:
    void walk() {
        cout << "I am walking" << endl;
    }
};

class Bird : public Animal {
public:
    void fly() 
    {
        cout << "I am flying" << endl;
    }

    void sing() 
    {
        cout << "I am singing" << endl;
    }
};


int main() 
{
    Bird bird;
    bird.walk(); 
    bird.fly();  
    bird.sing(); 
    return 0;
}
