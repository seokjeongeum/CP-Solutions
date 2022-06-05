#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	int T;
	cin >> T;
	while (T > 0) {
		int N;
		cin >> N;
		set<char>s;
		while (N > 0) {
			char c;
			cin >> c;
			s.insert(c);
			--N;
		}
		vector<char>v(s.begin(), s.end());
		int i = 1;
		for (int j = 1; j <= v.size(); ++j) {
			i *= j;
		}
		cout << i << endl;
		do {
			for (char c : v) {
				cout << c;
			}
			cout << ' ';
		} while (next_permutation(v.begin(), v.end()));
		cout << endl;
		--T;
	}
	return 0;
}