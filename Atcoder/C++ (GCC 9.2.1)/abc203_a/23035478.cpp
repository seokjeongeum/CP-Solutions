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
	int a, b, c;
	cin >> a >> b >> c;
	if (b == c) {
		cout << a << endl;
	}
	else if (a == c) {
		cout << b << endl;
	}
	else if (a == b) {
		cout << c << endl;
	}
	else {
		cout << 0 << endl;
	}
	return 0;
}