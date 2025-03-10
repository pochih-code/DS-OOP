#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int n = 0; n < N; ++n) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1;
        int A[10][10];
        for (int i = 0; i < r1; ++i) {
            for (int j = 0; j < c1; ++j) {
                cin >> A[i][j];
            }
        }

        cin >> r2 >> c2;
        int B[10][10];
        for (int i = 0; i < r2; ++i) {
            for (int j = 0; j < c2; ++j) {
                cin >> B[i][j];
            }
        }

        int result[10][10];

        bool can_add_subtract = (r1 == r2 && c1 == c2);
        bool can_multiply = (c1 == r2);

        if (can_add_subtract) {
            cout << "Addition:" << "\n";
            for (int i = 0; i < r1; ++i) {
                for (int j = 0; j < c1; ++j) {
                    result[i][j] = A[i][j] + B[i][j];
                }
            }
            for (int i = 0; i < r1; ++i) {
                for (int j = 0; j < c1; ++j) {
                    cout << result[i][j] << " ";
                }
                cout << "\n";
            }
            cout << "\n";

            cout << "Subtraction:" << "\n";
            for (int i = 0; i < r1; ++i) {
                for (int j = 0; j < c1; ++j) {
                    result[i][j] = A[i][j] - B[i][j];
                }
            }
            for (int i = 0; i < r1; ++i) {
                for (int j = 0; j < c1; ++j) {
                    cout << result[i][j] << " ";
                }
                cout << "\n";
            }
            cout << "\n";
        }

        if (can_multiply) {
            cout << "Multiplication:" << "\n";
            for (int i = 0; i < r1; ++i) {
                for (int j = 0; j < c2; ++j) {
                    result[i][j] = 0;
                    for (int k = 0; k < c1; ++k) {
                        result[i][j] += A[i][k] * B[k][j];
                    }
                }
            }
            for (int i = 0; i < r1; ++i) {
                for (int j = 0; j < c2; ++j) {
                    cout << result[i][j] << " ";
                }
                cout << "\n";
            }
            cout << "\n";
        }

        if (!can_add_subtract && !can_multiply) {
            cout << "Can not do any operation." << "\n";
            cout << "\n";
        }

        if (n != N - 1) {
            cout << "---------------" << "\n";
        }
    }

    return 0;
}
