#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <limits>
#include <queue>
using namespace std;
long long remainders[200];
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		int A;
		cin >> A;
		++remainders[A % 200];
	}
	long long r = 0;
	for (int i = 0; i < 200; ++i) {
		r += remainders[i] * (remainders[i] - 1) / 2;
	}
	cout << r << endl;
	return 0;
}
