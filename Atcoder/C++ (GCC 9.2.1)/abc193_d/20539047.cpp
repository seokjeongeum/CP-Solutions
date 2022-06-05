#include <iostream>
#include <limits>
#include <algorithm>
#include<iomanip>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	int K;
	cin >> K;
	string S;
	cin >> S;
	string T;
	cin >> T;
	int cases[10];
	for (int i = 1; i <= 9; ++i) {
		cases[i] = K;
	}
	int takahashi_count[10]{};
	int aoki_count[10]{};
	for (int i = 0; i < 4; ++i) {
		int s = S[i] - '1' + 1;
		int t = T[i] - '1' + 1;
		--cases[s];
		--cases[t];
		++takahashi_count[s];
		++aoki_count[t];
	}
	long long takahashi_wins = 0;
	long long all_cases = 0;
	for (int i = 1; i <= 9; ++i) {
		long long case1 = cases[i];
		--cases[i];
		++takahashi_count[i];
		for (int j = 1; j <= 9; ++j) {
			long long case2 = cases[j];
			++aoki_count[j];
			all_cases += case1 * case2;
			int takahashi_score = 0;
			for (int k = 1; k <= 9; ++k) {
				int base = 1;
				int l = 0;
				while (l < takahashi_count[k]) {
					base *= 10;
					++l;
				}
				takahashi_score += k * base;
			}
			int aoki_score = 0;
			for (int k = 1; k <= 9; ++k) {
				int base = 1;
				int l = 0;
				while (l < aoki_count[k]) {
					base *= 10;
					++l;
				}
				aoki_score += k * base;
			}
			if (takahashi_score > aoki_score) {
				takahashi_wins += case1 * case2;
			}
			--aoki_count[j];
		}
		++cases[i];
		--takahashi_count[i];
	}
	cout << setprecision(numeric_limits<double>::digits10 + 1) << (double)takahashi_wins / all_cases;
	return 0;
}
