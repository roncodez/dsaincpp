#include <iostream>
using namespace std;

int main() {
    double marks[5];
    double grades [5] = {90,80,85,98,100};
    double newMarks[] = {19,28,43,32};
    int numbers[6] = {2,3}; // rest of the values zero 
    cout << numbers[3] << endl; // should give zero for all values apart from stored ones 
    for(auto iterator : numbers) { // ranged for loop 
        cout << iterator << " ";
    }
}