#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T > 0) {
		int N;
		cin >> N;
		int A[200000];
		for (int i = 0; i < N; ++i) {
			cin >> A[i];
		}
		sort(A, A + N);
		int minimum = numeric_limits<int>::max();
		int i0 = -1;
		int i1 = -1;
		for (int i = 1; i < N; ++i) {
			int a = abs(A[i] - A[i - 1]);
			if (a < minimum) {
				minimum = a;
				i0 = A[i - 1];
				i1 = A[i];
			}
		}
		cout << i0 << ' ' << i1 << endl;
		--T;
	}
	return 0;
}
