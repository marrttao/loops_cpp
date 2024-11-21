#include <iostream>
using namespace std;

int main() {
    int a;
    size_t result = 1;
    cout << "Enter a number: ";

    do {
        cin >> a;
        if ((a < 0) || (a > 20)) { 
            cout << "The number must be between 0 and 20. Please try again: ";
        }
    } while ((a < 0) || (a > 20));

    for (int i = a; i <= 20; i++) {
        result *= i;
    }

    cout << endl << "The product of numbers from " << a << " to 20 is: " << result << endl;
    return 0;
}
