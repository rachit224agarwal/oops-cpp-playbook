#include<iostream>
using namespace std;

class Person {
    public : 
        string name;
        int age;
};

class Student : public Person {
    public:
        long roll;
};

class gradStudent : public Student {
    public:
        long salary;

        void getInfo(){
            cout << "Name is " << name << endl << "Age is " << age << endl << "Roll is " << roll << endl << "Salary is " << salary << endl;
        }
};

int main(){
    gradStudent g1;
    g1.name = "Rachit"; 
    g1.age = 21; 
    g1.roll = 2300290100194; 
    g1.salary = 234009; 
    g1.getInfo();

    return 0;
}