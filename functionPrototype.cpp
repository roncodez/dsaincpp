#include <iostream>
using namespace std;

// function prototype 
int add(int x, int y);

int demoUnrefParam(int) { // unreferenced parameter 
    cout << "hey demoUnrefParam";
}
int main() {
    cout << add(4,5); // arguments 
    demoUnrefParam(5);
}
int add(int a, int b){ // parameters 
    return a+b;
}