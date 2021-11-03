// Void Function with Parameter

#include <cstdlib>
#include <iostream>

using namespace std;

void printSum(int a, int b) {
    cout << "The sum of " << a;
    cout << " and " << b << " is ";
    cout << a + b << endl;
}

int main() {

    printSum(91, 23);

    // Print a new line and ask user for any key before exiting
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
