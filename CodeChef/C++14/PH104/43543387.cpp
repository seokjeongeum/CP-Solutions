#include <iostream>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	int A[1000001];
	A[1] = 0;
	A[2] = 1;
	for (int i = 3; i <= 1000000; ++i) {
		A[i] = (A[i - 1] + A[i - 2]) % 1000000007;
	}
	int T;
	cin >> T;
	while (T > 0) {
		int N, M;
		cin >> N >> M;
		int i = 1;
		bool b = true;
		while (M > 0) {
			if (b) {
				cout << A[i] << ' ';
				++i;
			}
			else {
				cout << A[N] << ' ';
				--N;
			}
			b = !b;
			--M;
		}
		cout << endl;
		--T;
	}
	return 0;
}