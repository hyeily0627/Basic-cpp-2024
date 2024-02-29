#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    char name[50];
    int age;
public:
    Person(const char* myname, int myage) : age(myage) {
        strcpy(name, myname);
    }
    void WhatYourName() const {
        cout << "My name is " << name << endl;
    }
    void HowOldAreYou() const {
        cout << "I'm " << age << " years old" << endl;
    }
};

class UnivStudent : public Person {
private:
    string major;
public:
    UnivStudent(const char* myname, int myage, const char* mymajor) : Person(myname, myage), major(mymajor) {
        cout << "자식 생성자 호출" << endl;
    }
    void WhoAreYou() const {
        WhatYourName();
        HowOldAreYou();
        cout << "My major is " << major << endl;
    }
};

int main() {
    UnivStudent s("오혜진", 27, "History");
    s.WhoAreYou();

    return 0;
}

