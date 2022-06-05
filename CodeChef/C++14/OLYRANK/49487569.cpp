#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>
#include <limits>
#include <set>
#include <unordered_map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	int T;
	cin >> T;
	while (T > 0) {
		int G1, S1, B1, G2, S2, B2;
		cin >> G1 >> S1 >> B1 >> G2 >> S2 >> B2;
		if (G1 + S1 + B1 > G2 + S2 + B2) {
			cout << 1 << endl;
		}
		if (G1 + S1 + B1 < G2 + S2 + B2) {
			cout << 2 << endl;
		}
		--T;
	}
	return 0;
}
