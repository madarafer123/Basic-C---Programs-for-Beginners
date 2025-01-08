#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user for a number to generate its multiplication table
    cout << "Enter a number to see its multiplication table: ";
    cin >> number;

    // Use a `for` loop to generate the table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        // Display the result of each multiplication
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}