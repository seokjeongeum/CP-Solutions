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

	int Q;
	cin >> Q;
	queue<int>q;
	multiset<int>ms1;
	multiset<int>ms2;
	while (Q > 0) {
		int query;
		cin >> query;
		switch (query) {
		case 1: {
			int x;
			cin >> x;
			q.push(x);
			ms2.insert(x);
			break; }
		case 2: {
			if (ms1.empty()) {
				int front = q.front();
				q.pop();
				ms2.erase(ms2.find(front));
				cout << front << endl;
			}
			else {
				multiset<int>::iterator i = ms1.begin();
				cout << *i << endl;
				ms1.erase(i);				
			}
			break; }
		case 3: {
			ms1.insert(ms2.begin(), ms2.end());
			q = queue<int>();
			ms2.clear();
			break; }
		}
		--Q;
	}

	return 0;
}
