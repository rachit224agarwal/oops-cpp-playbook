#include<iostream>
using namespace std;

// run time polymorphism
// function overriding
// virtual functions

class Parent {
    public:
    void fun(){
        cout << "Hellooooooo Parent" << endl;
    }
    virtual void hell(){
        cout << "I am PARENT " << endl;
    }
};

class Child : Parent {
    public:
    void fun(){
        cout << "Hellooooooo Child" << endl;
    }
    void hell(){
        cout << "I am CHILD " << endl;
    }
};

int main(){
    Parent o1;
    o1.hell();
    Child o2;
    o2.hell();
    return 0;
}