// Int Function with Parameter

#include <cstdlib>
#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {

    cout << "The sum is: " << sum(91, 23) << endl;
    // Print a new line and ask the user for any key before exiting
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}