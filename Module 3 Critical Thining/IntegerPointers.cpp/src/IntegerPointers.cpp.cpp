#include <iostream>

using namespace std;

int main() {

    int value1;
    int value2;
    int value3;

    cout << "Enter first integer: ";
    cin >> value1;

    cout << "Enter second integer: ";
    cin >> value2;

    cout << "Enter third integer: ";
    cin >> value3;

    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    *ptr1 = value1;
    *ptr2 = value2;
    *ptr3 = value3;

    cout << "\nVariable Values:" << endl;
    cout << "Value 1: " << value1 << endl;
    cout << "Value 2: " << value2 << endl;
    cout << "Value 3: " << value3 << endl;

    cout << "\nPointer Values:" << endl;
    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "*ptr3 = " << *ptr3 << endl;

    cout << "\nMemory Addresses:" << endl;
    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr2 = " << ptr2 << endl;
    cout << "ptr3 = " << ptr3 << endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
