#include <iostream>
using namespace std;

int main() {
    int number;
    unsigned long long factorial = 1; // Variable to store the factorial result

    // Ask the user for a positive integer
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check if the number is negative
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate the factorial using a `for` loop
        for (int i = 1; i <= number; i++) {
            factorial *= i; // Multiply the current value by the index
        }
        // Display the result
        cout << "The factorial of " << number << " is: " << factorial << endl;
    }

    return 0;
}
