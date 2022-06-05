#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
#include <utility>
#include <unordered_map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	int N, X;
	cin >> N >> X;
	bool is_odd = true;
	while (N > 0) {
		int A;
		cin >> A;
		if (is_odd) {
			X -= A;
		}
		else {
			X -= A - 1;
		}
		is_odd = !is_odd;
		--N;
	}
	if (X >= 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}