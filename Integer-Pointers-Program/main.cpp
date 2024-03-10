#include <iostream>

using namespace std;

int main() {
    // Variables to store integer values
    int value1, value2, value3;

    // Prompt the user to enter three integer values
    cout << "Enter three integer values:\n";
    cin >> value1 >> value2 >> value3;

    // Create integer pointers to dynamic memory
    int *ptr1 = new int(value1);
    int *ptr2 = new int(value2);
    int *ptr3 = new int(value3);

    // Display the contents of variables and pointers
    cout << "Value 1: " << value1 << ", Pointer 1: " << *ptr1 << endl;
    cout << "Value 2: " << value2 << ", Pointer 2: " << *ptr2 << endl;
    cout << "Value 3: " << value3 << ", Pointer 3: " << *ptr3 << endl;

    // Release memory allocated for pointers
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
