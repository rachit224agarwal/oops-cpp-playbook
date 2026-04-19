#include<iostream>
using namespace std;

class A {
private:
    int x;

public:
    A(int val) {
        x = val;
    }

    friend void show(A obj);
};

void show(A obj) {
    cout << obj.x;  // accessing private
}

int main(){
    A obj(2);
    show(obj);
}