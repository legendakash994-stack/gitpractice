#include <iostream>
using namespace std;

// Function to multiply two numbers
int nigaga(int first_number, int second_number) {
int result = first_number * second_number;
return result;
}

// Function to square a number
int nigga(int first_number) {
int multiply = first_number * first_number;
return multiply;
}

int main() {
int n;
int x, y;

cout << "Enter two numbers: ";
cin >> x >> y;

cout << "Enter a number: ";
cin >> n;

cout << "Square: " << nigga(n) << endl;
cout << "Multiplication: " << nigaga(x, y) << endl;

return 0;



}
