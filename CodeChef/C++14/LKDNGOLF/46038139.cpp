#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <limits>
#include <queue>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	cin >> T;
	while (T > 0) {
		int N, x, k;
		cin >> N >> x >> k;
		if (x % k == 0 || x % k == (N + 1) % k) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		--T;
	}
	return 0;
}
