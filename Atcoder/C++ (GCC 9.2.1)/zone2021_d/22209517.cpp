#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	string S;
	cin >> S;
	deque<char>d;
	bool R = false;
	for (char c : S) {
		if (c == 'R') {
			R = !R;
		}
		else {
			if (R) {
				if (d.size() < 1 || d.front() != c) {
					d.push_front(c);
				}
				else {
					d.pop_front();
				}
			}
			else {
				if (d.size() < 1 || d.back() != c) {
					d.push_back(c);
				}
				else {
					d.pop_back();
				}
			}
		}
	}
	string s;
	int n = d.size();
	if (R) {
		for (int i = n - 1; i >= 0; --i) {
			s += d[i];
		}
	}
	else {
		for (int i = 0; i < n; ++i) {
			s += d[i];
		}
	}
	cout << fixed << s << endl;
	return 0;
}