#include <iostream>
using namespace std;

int main() {
	int k;
	cout << "Enter a k: " << endl;
	cin >> k;
	for (int i = 1; i <= 10; i++) {
		cout << k << " * " << i << " = " << k*i << endl;
	}
	return 0;
}