#include <iostream>
#include <string>

using namespace std;

int main() {
    int numIterations = 3;

    while (numIterations > 0) {
        string input1, input2;

        cout << "Enter first string: ";
        getline(cin, input1);

        cout << "Enter second string: ";
        getline(cin, input2);

        string result = input1.append(input2);

        cout << "Concatenated string: " << result << endl;

        numIterations--;
    }

    return 0;
}
