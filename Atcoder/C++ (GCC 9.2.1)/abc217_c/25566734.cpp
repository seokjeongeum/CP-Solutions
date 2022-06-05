#include <iostream>
#include <queue>
#include <tuple>
#include <limits>
#include <unordered_map>
#include <stack>
#include <set>
#include <unordered_map>
#include <deque>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	int N;
	cin >> N;
	vector<int>Q(N);
	for (int i = 1; i <= N; ++i) {
		int p;
		cin >> p;
		Q[p - 1] = i;
	}
	for (int q : Q) {
		cout << q << ' ';
	}
	return 0;
}
