#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	int T;
	cin >> T;
	while (T > 0) {
		int N;
		cin >> N;
		long long A[100000];
		for (int i = 0; i < N; ++i) {
			cin >> A[i];
		}
		sort(A, A + N);
		cout << max(A[1] * A[0] + A[1] - A[0], A[N - 1] * A[N - 2] + A[N - 1] - A[N - 2]) << '\n';
		--T;
	}
	return 0;
}
