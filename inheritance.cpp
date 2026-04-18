#include<iostream>
using namespace std;

class Person {
    public : 
        string name;
        int age;

        Person() {
            cout << "Parent Constructor.." << endl;
        }

        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
};

class Student : public Person {
    public:
        long roll;

        Student() {
            cout << "Child Constructor.." << endl;
        }

        Student(string name, int age, long roll) : Person(name,age) {
            this->roll = roll;
        }

        void getInfo(){
            cout << "Name is " << name << endl << "Age is " << age << endl << "Roll is " << roll << endl;
        }
};

int main(){
    // Student s1;
    // s1.name = "Rachit";
    // s1.age = 21;
    // s1.roll = 2300290100194;
    // s1.getInfo();

    Student s2("Rachit", 21, 2300290100194);
    s2.getInfo();

    return 0;
}