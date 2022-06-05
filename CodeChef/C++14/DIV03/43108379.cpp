#include <iostream>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	int T;
	cin >> T;
	while (T > 0) {
		int A[10];
		for (int i = 0; i < 10; ++i) {
			cin >> A[i];
		}
		int K;
		cin >> K;
		int i = 10;
		while (i > 1 && K >= 0) {
			if (K < A[i - 1]) {
				break;
			}
			K -= A[i - 1];
			--i;
		}
		cout << i << '\n';
		--T;
	}
	return 0;
}
