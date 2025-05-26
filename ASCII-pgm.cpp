#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a letter: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        int ascii = ch - 'A' + 65; 
        cout << "The ASCII value of " << ch << " is " << ascii << endl;
    } else{ 
        (ch >= 'a' && ch <= 'z') ;
        int ascii = ch - 'a' + 97; 
        cout << "The ASCII value of " << ch << " is " << ascii << endl;
    }

    return 0;
}
