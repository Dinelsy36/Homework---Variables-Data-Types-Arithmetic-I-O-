#include <iostream>

using namespace std;

int main(){
    double grade1, grade2, grade3;
    double average;
    
    cout << "Enter three grades: ";
    cin >> grade1 >> grade2 >> grade3;
    
    average = (grade1 + grade2 + grade3) / 3.0;
    
    cout << "Average GPA: " << average << endl;

    return 0;
}