#include<iostream>
using namespace std;

class Teacher{
    private:
        double salary;
    public:
        string name;
        string dept;

    // non parameterised constructor
    Teacher(){
        cout << "I am a Non-Parameterised Constructor" << endl;
    }

    // parameterised constructor
    Teacher(string name, string dept, double salary){
        this->name = name;
        this->dept = dept;
        this->salary = salary;
    }

    // custom copy constructor
    Teacher(Teacher &origObj){
        cout << "I am a custom copy constructor" << endl;
        this->name = origObj.name;
        this->dept = origObj.dept;
        this->salary = origObj.salary;
    }

    void getInfo(){
        cout << name << " " << dept << " " << salary << endl;
    }

};

int main(){
    Teacher t1;  // non parameterised constructor

    Teacher t2("Dr. Parita","CSE",234999); // parameterised constructor
    t2.getInfo();

    Teacher t3(t2);    // default and custom copy constructor
    t3.getInfo();
    
    return 0;
}