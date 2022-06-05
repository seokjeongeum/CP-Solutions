#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <limits>
#include <queue>
using namespace std;
int pow2(int n) {
	if (n == 0) {
		return 1;
	}
	int i = pow2(n / 2);
	long long r = 1;
	r *= i;
	r %= 1000000007;
	r *= i;
	r %= 1000000007;
	if (n % 2 != 0) {
		r *= 2;
		r %= 1000000007;
	}
	return r;
}
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	cin >> T;
	while (T > 0) {
		int N;
		cin >> N;
		cout << pow2(N - 1) << endl;
		--T;
	}
	return 0;
}
