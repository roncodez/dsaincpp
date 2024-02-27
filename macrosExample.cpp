#include <iostream> 
#define PI 3.14159 // object macros 
#define max(a, b) (a > b ? a : b) // functional macros 
using namespace std;

int main() {
    cout << PI << endl;
    cout << max(10,12);
    return 0;
}