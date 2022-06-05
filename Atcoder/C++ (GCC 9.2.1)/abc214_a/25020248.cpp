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
	int N;
	cin >> N;
	if (1 <= N && N <= 125) {
		cout << 4 << endl;
	}
	else if (126 <= N && N <= 211) {
		cout << 6 << endl;
	}
	else if (212 <= N && N <= 214) {
		cout << 8 << endl;
	}
	return 0;
}
