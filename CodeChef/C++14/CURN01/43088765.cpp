#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t > 0) {
		int N;
		cin >> N;
		string S;
		cin >> S;
		bool distincts[26]{};
		for (int i = 0; i < N; ++i) {
			distincts[tolower(S[i]) - 'a'] = true;
		}
		int distinct = 0;
		for (int i = 0; i < 26; ++i) {
			if (distincts[i]) {
				++distinct;
			}
		}
		if (distinct % 2 == 0) {
			cout << "SPAM" << '\n';
		}
		else {
			cout << "AVENGER" << '\n';
		}
		--t;
	}
	return 0;
}
