#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	cin >> N;
	int minimum = numeric_limits<int>::max();
	for (int i = 0; i < N; ++i) {
		int A, P, X;
		cin >> A >> P >> X;
		if (A < X) {
			minimum = min(minimum, P);
		}
	}
	if (minimum == numeric_limits<int>::max()) {
		cout << -1;
	}
	else {
		cout << minimum;
	}
	return 0;
}
