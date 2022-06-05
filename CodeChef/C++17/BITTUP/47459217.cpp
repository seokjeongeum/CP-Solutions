#include <iostream>
#include <deque>
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int power(int base, int p) {
	if (p == 1) {
		return base;
	}
	int half = power(base, p / 2);
	long long r = half;
	r *= half;
	r %= 1000000007;
	if (p % 2 != 0) {
		r *= base;
		r %= 1000000007;
	}
	return r;
}
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	while (T > 0) {
		long long N, M;
		cin >> N >> M;
		cout << power(power(2, N) - 1, M) << endl;
		--T;
	}
	return 0;
}