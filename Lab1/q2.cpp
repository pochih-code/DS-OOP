#include <iostream>
using namespace std;

int zero(int num) {
	if (num == 1) {
		return 1;
	}
	else {
		return num * zero(num - 1);
	}
}

int one(int num) {
	if (num <= 1) {
		return num;
	}
	else {
		return one(num - 1) + one(num - 2);
	}
}

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			cout << 1 << "\n";
		}
		if (n % 4 == 0 && n != 0) {
			cout << zero(n) << "\n";
		}
		if (n % 4 == 1) {
			cout << one(n) << "\n";
		}
		if (n % 4 == 2) {
			cout << (n * (n + 1) / 2) * -1 << "\n";
		}
		if (n % 4 == 3) {
			cout << (n * (n + 1) / 2) << "\n";
		}
	}
	return 0;
}