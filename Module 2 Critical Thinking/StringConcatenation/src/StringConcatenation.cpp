#include <iostream>
#include <string>

using namespace std;

int main() {

    string firstString;
    string secondString;
    string combinedString;

    for (int i = 1; i <= 3; i++) {

        cout << "Test " << i << endl;

        cout << "Enter first string: ";
        getline(cin, firstString);

        cout << "Enter second string: ";
        getline(cin, secondString);

        combinedString = firstString + secondString;

        cout << "Combined string: " << combinedString << endl;

        cout << endl;
    }

    return 0;
}
