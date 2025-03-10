#include <iostream>
#include <string>
using namespace std;

bool check(string str) {
	int left = 0;
	int right = str.length() - 1;
	while (right > left) {
		if (str[left] != str[right]) {
			return false;
		}
		left++;
		right--;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str1, str2;
		cin >> str1 >> str2;
		bool one = check(str1);
		bool two = check(str2);
		bool three = check(str1 + str2);

		cout << "String one is " << (one ? "a palindrome." : "not a palindrome.") << "\n";
		cout << "String two is " << (two ? "a palindrome." : "not a palindrome.") << "\n";
		cout << "String three is " << (three ? "a palindrome." : "not a palindrome.") << "\n";
	}
	return 0;
}