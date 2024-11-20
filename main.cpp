#include <iostream>
using namespace std;

int main() {
	int a,sum = 0;
	while (!0) {
		cin >> a;
		sum += a;
		if (a == 0) {
			cout << sum << endl;
			break;
		}
	}
	return 0;
}