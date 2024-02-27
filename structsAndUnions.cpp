#include <iostream>
#include <string> 
using namespace std;

struct Person {
    int age;
    string name;
};

union Employee {
    int empNo;
    long sal;
};

int main() {

    Person p1;
    p1.age = 21;
    p1.name = "ronit";
    cout << sizeof(p1) << endl;
    // comes out to be 28 bcs of string and some padding   

    Employee e1;
    e1.empNo = 77;
    e1.sal = 600000;
    cout << e1.empNo << endl; // should not work - gives the overwritten value 
    cout << e1.sal << endl;
    cout << sizeof(e1) << endl; //should ideally give 8 
}