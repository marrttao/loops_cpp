#include <iostream>
using namespace std;

int main() {
    int range_start, range_end, sum = 0;
    cout << "Enter the range start: ";
    cin >> range_start;
    cout << "Enter the range end: ";
    cin >> range_end;

    for (int i = range_start; i <= range_end; i++) {
        sum += i;
    }

    cout << "The sum of numbers in the range is: " << sum << endl;
    return 0;
}
