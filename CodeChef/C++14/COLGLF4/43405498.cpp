#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	int T;
	cin >> T;
	while (T > 0) {
		long long N, E, H, A, B, C;
		cin >> N >> E >> H >> A >> B >> C;
		long long minimum = numeric_limits<long long>::max();
		for (long long c = 0; c <= N && c <= E && c <= H; ++c) {
			long long a, b;
			if (A < B) {
				a = min(N - c, (E - c) / 2);
				b = min(N - a - c, (H - c) / 3);
			}
			else {
				b = min(N - c, (H - c) / 3);
				a = min(N - b - c, (E - c) / 2);
			}
			a = max(a, 0LL);
			b = max(b, 0LL);
			if (a + b + c >= N) {
				minimum = min(minimum, a * A + b * B + c * C);
			}
		}
		if (minimum == numeric_limits<long long>::max()) {
			cout << -1 << endl;
		}
		else {
			cout << minimum << endl;
		}
		--T;
	}
	return 0;
}
