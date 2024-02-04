#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
        string name;
        int age;
    Student() {

    }
    void printDetails(string n,int a) {
        name = n;
        age = a;
        cout << "Hi" << " " << name << " you are " << age << " years old." << endl;
    }
};

int main() {
    Student s1;
    s1.printDetails("ronit", 21);
    return 0;
}