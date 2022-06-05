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
	int N;
	cin >> N;
	priority_queue<int, vector<int>, greater<>>pq;
	while (N > 0) {
		int C;
		cin >> C;
		pq.push(C);
		--N;
	}
	int i = 0;
	long long l = 1;
	while (!pq.empty()) {
		int C = pq.top();
		pq.pop();
		l *= C - i;
		l %= 1000000007;
		++i;
	}
	cout << l << endl;
	return 0;
}