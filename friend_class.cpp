#include<iostream>
using namespace std;

class A {
private:
    int x = 10;

    friend class B;
};

class B {
public:
    void show(A obj) {
        cout << obj.x;  // allowed
    }
};

int main() {
    A objA;
    B objB;

    objB.show(objA);

    return 0;
}