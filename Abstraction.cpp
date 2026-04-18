#include<iostream>
using namespace std;

class Shape { // already a abstract class after pure virtual function
    public :
    virtual void draw() = 0; // pure virtual functions
};

class Circle : public Shape {
    public:
    void draw() {
        cout << "Drawing a Circle ." << endl;
    }
};

int main() {
    Circle c1;
    c1.draw();
    return 0;
}