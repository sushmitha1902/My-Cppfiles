#include <iostream>
using namespace std;

int main()
{   
    int a;
    cout << "Enter a value: ";
    cin >> a;
    bool isEven = (a % 2 == 0);  
    if (isEven) {
        cout << a << " is even" << endl;
    }
    else {
        cout << a << " is odd" << endl;
    }

    return 0;
}
