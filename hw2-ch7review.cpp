#include <iostream>
using namespace std;

int main() {

    // variables
    double grade [50];
    double tot = 0, avg = 0;
    int arr, counter = 0;

    cout << "\nEnter the values of grades.\n(Enter a negative number to finish entering grades)  " << endl;

    // input loop
    for (arr = 0; grade[arr]!='\0'; arr++) {

        cin >> grade[arr];

        if (grade[arr] > 0) {
            tot = tot + grade[arr];
            counter++;
        }

        else {
            break;
        }
    }

    // find average
    avg = tot / counter;

    cout << "\nTotal of all grades: " << tot << endl;
    cout << "Average of all grades: " << avg << endl;

    cout << "\nThe grades below average are " << endl;

    // below average loop
    for (arr = 0; arr < counter; arr++) {

        if (grade[arr] < avg) {
            cout << "* " << grade[arr] << endl;
        }
    }

    // letter eq loop
    cout << "\nThe letter equivalent to the grades are " << endl;

    for (arr = 0; arr < counter; arr++) {

        if (grade[arr] < 60) {
            cout << grade[arr] << " = F :(" << endl;
        }

        else if (grade[arr] >= 60 && grade[arr] < 70) {
            cout << grade[arr] << " = D " << endl;
        }

        else if (grade[arr] >= 70 && grade[arr] < 80) {
            cout << grade[arr] << " = C " << endl;
        }

        else if (grade[arr] >= 80 && grade[arr] < 90) {
            cout << grade[arr] << " = B " << endl;
        }

        else if (grade[arr] >= 90 && grade[arr] <= 100) {
            cout << grade[arr] << " = A :)" << endl;
        }
    }

    return 0;

}
