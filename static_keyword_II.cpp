#include<iostream>
using namespace std;

class Student {
public:
    inline static int count;

    Student() {
        count++;
    }
};

int main(){
    Student s1;
    Student s2;
    Student s3;
    cout << s1.count << endl;
    cout << s2.count << endl;
    cout << s3.count << endl;


}