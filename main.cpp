#include <iostream>

using namespace std;

int main(){
    int num1{0};
    int num2{0};
    int sum{0};
    int difference{0};
    int product{0};
    int quotient{0};
    
    cout<< "enter two numbers: " ;
    cin >> num1 >> num2;
    sum = num1 + num2;
    
    cout << "Sum is \t: " << sum << endl;
    
    difference = num1 - num2;
    cout << "Difference is \t: " << difference << endl;
    
    product = num1 * num2;
    cout << "Product is \t: " << product << endl;
    
    quotient = num1 / num2;
    cout << "Quotient is \t: " << quotient << endl;
    
    return 0;
}