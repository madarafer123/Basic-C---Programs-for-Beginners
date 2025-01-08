#include <iostream>
using namespace std;

int main() {
    float grade1, grade2, grade3, average;

    // Ask the user for three grades
    cout << "Enter the first grade: ";
    cin >> grade1;
    cout << "Enter the second grade: ";
    cin >> grade2;
    cout << "Enter the third grade: ";
    cin >> grade3;

    // Calculate the average of the three grades
    average = (grade1 + grade2 + grade3) / 3;

    // Display the average
    cout << "The student's average is: " << average << endl;

    // Check if the student passed or failed
    if (average >= 7) {
        cout << "Student passed!" << endl;
    } else {
        cout << "Student failed!" << endl;
    }

    return 0;
}
