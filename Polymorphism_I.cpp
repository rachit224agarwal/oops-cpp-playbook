#include<iostream>
using namespace std;

// compile time polymorphism
// function overloading
// constructor overloading : nothing much diff as name suggust
// operator overloading

class X {
    public:
    void fun(){
        cout << "Hellooooooo" << endl;
    }

    void fun(int x) {
        cout << "Hellooooo " << x << endl;
    }

    void fun(string x) {
        cout << "Hellooooo " << x << endl;
    }
};

int main(){
    X obj1;
    obj1.fun();
    obj1.fun(194);
    obj1.fun("Raaaaachittttt");
    return 0;
}