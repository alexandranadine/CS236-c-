#include <iostream>
using namespace std;

// declare the function
int convertdays(int, int, int);

int main() {

    int userYear, userDay, userMonth;

    cout << "\n  Enter the year: ";
    cin >> userYear;

    cout << "  Enter the month (1-12): ";
    cin >> userMonth;

    cout << "  Enter the day (1-31): ";
    cin >> userDay;

    cout << "\n  The converted date is: " << convertdays(userMonth, userDay, userYear) << endl;

    return 0;
}

// definition of function
int convertdays (int month, int day, int year) {

    return ((year * 10000) + (month * 100) + day);

}