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
		int A1, A2, A3, A4;
		cin >> A1 >> A2 >> A3 >> A4;
		int maximum = 0;
		int count = 0;
		if (A1 == A2) {
			++count;
		}
		if (A1 == A3) {
			++count;
		}
		if (A1 == A4) {
			++count;
		}
		maximum = max(maximum, count); 
		count = 0;
		if (A2 == A1) {
			++count;
		}
		if (A2 == A3) {
			++count;
		}
		if (A2 == A4) {
			++count;
		}
		maximum = max(maximum, count); 
		count = 0;
		if (A3 == A1) {
			++count;
		}
		if (A3 == A2) {
			++count;
		}
		if (A3 == A4) {
			++count;
		}
		maximum = max(maximum, count);
		count = 0;
		if (A4 == A1) {
			++count;
		}
		if (A4 == A2) {
			++count;
		}
		if (A4 == A3) {
			++count;
		}
		maximum = max(maximum, count);
		cout << min(2, 3 - maximum) << endl;
		--T;
	}
	return 0;
}
