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

class gradStudent : public Person {
    public:
        int salary;   
};

int main(){

    return 0;
}