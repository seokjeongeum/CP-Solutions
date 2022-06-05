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
string X;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	cin >> X;
	struct compare {
		bool operator()(const string& s1, const string s2) const {
			for (int i = 0; s1[i] && s2[i]; ++i) {
				if (s1[i] != s2[i]) {
					return X.find(s1[i]) < X.find(s2[i]);
				}
			}
			return s1.size() < s2.size();
		}
	};
	int N;
	cin >> N;
	set<string, compare>s;
	while (N > 0) {
		string S;
		cin >> S;
		s.insert(S);
		--N;
	}
	for (string st : s) {
		cout << st << endl;
	}
	return 0;
}
