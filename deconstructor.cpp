#include<iostream>
using namespace std;

class Teacher{
    private:
        double salary;
    public:
        string name;
        string dept;


    // parameterised constructor
    Teacher(string name, string dept, double salary){
        this->name = name;
        this->dept = dept;
        this->salary = salary;
    }

    ~Teacher(){
        cout << "I delete eveything" << endl <<  "opp. of constructor, called automatically" << endl << "deallocate memory, have to use special delete keyword for deallocation of dynamic memory";
    }

    void getInfo(){
        cout << name << " " << dept << " " << salary << endl;
    }

};

int main(){

    Teacher t2("Dr. Parita","CSE",234999); // parameterised constructor
    t2.getInfo();
    
    return 0;
}