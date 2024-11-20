#include <iostream>
using namespace std;

int main() {
    size_t sum = 0, a;
    cout << "Enter a number: ";
    cin >> a;

    for (size_t i = a; i <= 500; i++) {
        sum += i; 
    }

    cout << "The sum from " << a << " to 500 is: " << sum << endl;
    return 0;
}
