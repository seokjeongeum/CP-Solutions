#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	cin >> T;
	while (T > 0) {
		int N, K;
		cin >> N >> K;
		string S;
		cin >> S;
		int i = 0;
		bool b = false;
		for (char c : S) {
			if (c == '*') {
				++i;
				b |= i >= K;
			}
			else {
				i = 0;
			}
		}
		if (b) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		--T;
	}
	return 0;
}
