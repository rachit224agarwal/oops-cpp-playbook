#include<iostream>
using namespace std;

class Teacher{

    private:
        double salary;

    public:
        string name;
        string dept;
        string subject;

        void changeDept(string d){
            dept = d;
        }

        //setter
        void setSalary(double s){
            salary = s;
        }

        //getter
        double getSalary(){
            return salary;
        }
};

int main(){
    Teacher t1;        //automatic constructor call
    t1.name = "Parita";
    t1.dept = "Computer Science";
    t1.subject = "OS";
    t1.setSalary(257002);
    cout << t1.name << endl;
    cout << t1.getSalary() << endl;

    return 0;
}