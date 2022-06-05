#include <iostream>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N, M;
	cin >> N >> M;
	long long odd = 0;
	long long even = 0;
	for (int i = 0; i < N; ++i) {
		string S;
		cin >> S;
		int count = 0;
		for (char c : S) {
			if (c == '1') {
				++count;
			}
		}
		if (count % 2 == 0) {
			++even;
		}
		else {
			++odd;
		}
	}
	cout << odd * even;
	return 0;
}