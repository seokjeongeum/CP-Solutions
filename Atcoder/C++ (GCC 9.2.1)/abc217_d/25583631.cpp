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
	int L, Q;
	cin >> L >> Q;
	set<int>s{ 0,L };
	while (Q > 0) {
		int c, x;
		cin >> c >> x;
		switch (c) {
		case 1:
			s.insert(x);
			break;
		case 2:
			set<int>::iterator lb = s.lower_bound(x);
			int right = *lb;
			--lb;
			int left = *lb;
			cout << right - left << endl;
			break;
		}
		--Q;
	}
	return 0;
}
