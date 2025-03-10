#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;
    while (cin >> name >> age) {
        cout << "Hello " << name << ". Your age is " << 2025 - age << "." << "\n";
    }
    return 0;
}