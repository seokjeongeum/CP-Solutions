#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>
#include <limits>
using namespace std;
int A[200000], B[200000];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}
	for (int i = 0; i < M; ++i) {
		cin >> B[i];
	}
	sort(A, A + N);
	sort(B, B + M);
	int minimum = numeric_limits<int>::max();
	for (int i = 0; i < N; ++i) {
		int* lb = lower_bound(B, B + M, A[i]);
		if (lb != B) {
			minimum = min(minimum, abs(A[i] - *(lb - 1)));
		}
		minimum = min(minimum, abs(A[i] - *lb));
		if (lb != B + M) {
			minimum = min(minimum, abs(A[i] - *(lb + 1)));
		}
	}
	cout << minimum << endl;
	return 0;
}
