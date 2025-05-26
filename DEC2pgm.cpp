#include<iostream>
#include<iomanip> 
using namespace std;

int main()
{
    float a;
    cout << "Enter value of a: ";
    cin >> a;
    cout << fixed << setprecision(2);
    cout << "Value of a up to 2 decimal places: " << a << endl;

    return 0;
}