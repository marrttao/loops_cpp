#include <iostream>
using namespace std;

int main() {
	int choice;
	cout << "1 - paired numbers, 2 - non paired numbers, 3 -  multiplies 7: ";
	cin >> choice;
	int start_range, end_range;
	cout << "Enter start range: ";
	cin >> start_range;
	cout << "Enter end range: ";
	cin >> end_range;
	if (choice == 1) {
		for (int i = start_range; i <= end_range; i++) {
			if (i % 2 == 0) {
				cout << i << " ";
			}
		}
	}
	else if (choice == 2) {
		for (int i = start_range; i <= end_range; i++) {
			if (i % 2 != 0) {
				cout << i << " ";
			}
		}
	}
	else if (choice == 3) {
		for (int i = start_range; i <= end_range; i++) {
			if (i % 7 == 0) {
				cout << i << " ";
			}
		}
	}
	else {
		cout << "Invalid choice";
	}
	return 0;
}