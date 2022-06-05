#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
#include <utility>
#include <unordered_map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	int N, K;
	cin >> N >> K;
	int sum = 0;
	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= K; ++j) {
			sum += i * 100 + j;
		}
	}
	cout << sum << endl;
	return 0;
}