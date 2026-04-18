#include<iostream>
using namespace std;

class Teacher {
    public : 
        string name;
        int age;
};

class Student {
    public:
        long roll;
};

class Student_B_Tech : public Teacher , public Student {
    public:
        bool placed;

        void getInfo() {
            cout << name << " is " << "placed = " << placed << endl;
        }
};

int main(){
    Student_B_Tech b1;
    b1.name = "Rachit";
    b1.age = 23;
    b1.roll = 2300290100194;
    b1.placed = true;

    b1.getInfo();

    return 0;
}