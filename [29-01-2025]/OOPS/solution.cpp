#include <iostream>
#include <string>

using namespace std;

class Sports {
public:
    virtual string getName() {
        return "Generic Sports";
    }

    virtual void getNumberOfTeamMembers() {
        cout << "Each team has n players in " << getName() << endl;
    }
};

class Soccer : public Sports {
public:
    string getName() override {
        return "Soccer Class";
    }

    void getNumberOfTeamMembers() override {
        cout << "Each team has 11 players in " << getName() << endl;
    }
};

int main() {
    Sports* c1 = new Sports();
    Soccer* c2 = new Soccer();

    cout << c1->getName() << endl;
    c1->getNumberOfTeamMembers();

    cout << c2->getName() << endl;
    c2->getNumberOfTeamMembers();

    // Clean up dynamically allocated memory
    delete c1;
    delete c2;

    return 0;
}
