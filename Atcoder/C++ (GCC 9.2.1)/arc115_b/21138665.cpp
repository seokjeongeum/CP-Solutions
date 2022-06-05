#include <iostream>
#include <limits>
using namespace std;
int C[500][500];
int A[500];
int B[500];
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		int minimum = numeric_limits<int>::max();
		for (int j = 0; j < N; ++j) {
			cin >> C[i][j];
			minimum = min(minimum, C[i][j]);
		}
		A[i] = minimum;
	}
	for (int i = 0; i < N; ++i) {
		B[i] = C[0][i] - A[0];
	}
	bool b = true;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (C[i][j] != A[i] + B[j]) {
				b = false;
				break;
			}
		}
	}
	if (b) {
		cout << "Yes" << endl;
		for (int i = 0; i < N; ++i) {
			cout << A[i] << ' ';
		}
		cout << endl;
		for (int i = 0; i < N; ++i) {
			cout << B[i] << ' ';
		}
	}
	else {
		cout << "No";
	}
	return 0;
}