#include <iostream>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	int T;
	cin >> T;
	while (T > 0) {
		int N, K;
		cin >> N >> K;
		if (K != 0) {
			cout << N % K << '\n';
		}
		else {
			cout << N << '\n';
		}
		--T;
	}
	return 0;
}
