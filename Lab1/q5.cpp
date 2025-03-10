#include <iostream>
using namespace std;

int add(int input1, int input2) {
	return input1 + input2;
}
void sub(int* input1, int* input2, int* output) {
	*output = *input1 - *input2;
}
void mul(int input1, int input2, int& output) {
	output = input1 * input2;
}
void div(int* input1, int input2, int& output) {
	output = *input1 / input2;
}

int main() {
	int num1;
	int num2;

	cin >> num1 >> num2;

	int value = 0;
	value = add(num1, num2);
	cout << value << " ";
	sub(&num1, &num2, &value);
	cout << value << " ";
	mul(num1, num2, value);
	cout << value << " ";
	div(&num1, num2, value);
	cout << value << endl;
	return 0;
}