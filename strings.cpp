#include <iostream>
#include <string>
#include <limits> // For std::numeric_limits
using namespace std;

int main() {
    // declaring, initializing, and printing strings 
    string name = "ronit";
    cout << name;
    char str[] = "C++";
    char str2[4]= "C++";
    char str3[] = {'C','+','+','\0'};
    char str4[4] = {'C','+','+','\0'};
    cout << endl << str << endl << str2 << endl << str3 << endl << str4;

    // Taking inputs in Strings
    char inpName[100];
    cout << endl << "Enter your name: ";
    cin >> inpName;
    cout << endl << inpName;

    // Ignore the newline character left in the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    char inpLine[100];
    cout << endl << "Enter 'Programming is Fun!': ";
    cin.get(inpLine, 100);
    // Ignore the newline character left in the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << inpLine << endl;

    cout << "Enter full name: ";
    string fullName;
    getline(cin, fullName);
    cout << fullName << endl;

    return 0;
}
