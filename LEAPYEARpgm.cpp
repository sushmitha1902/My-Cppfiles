#include <iostream>
using namespace std;

int main()
{   
    int year;
    cout << "Enter year: ";
    cin >> year;

    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (isLeap) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
