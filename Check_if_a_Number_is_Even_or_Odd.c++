#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user for an integer
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the number is divisible by 2 (even) or not (odd)
    if (number % 2 == 0) {
        cout << "The number " << number << " is even." << endl;
    } else {
        cout << "The number " << number << " is odd." << endl;
    }

    return 0;
}