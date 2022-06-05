#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	int T;
	cin >> T;
	while (T > 0) {
		int S;
		cin >> S;
		int Q[100000];
		for (int i = 0; i < S; ++i) {
			cin >> Q[i];
		}
		long long r = 0;
		for (int i = 0; i < S; ++i) {
			r += Q[i];
			int E;
			cin >> E;
			while (E > 0) {
				int L;
				cin >> L;
				r += L - Q[i];
				--E;
			}
		}
		cout << r << '\n';
		--T;
	}
	return 0;
}
