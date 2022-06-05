#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>
#include <limits>
#include <set>
#include <unordered_map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	int N;
	cin >> N;
	vector<long long>S(N);
	for (int i = 0; i < N; ++i) {
		cin >> S[i];
	}
	vector<long long>T(N);
	for (int i = 0; i < N; ++i) {
		cin >> T[i];
	}
	priority_queue<long long, vector<long long>, greater<>>pq;
	pq.push(T[0]);
	long long sum = S[0];
	for (int i = 1; i < N; ++i) {
		T[i] = min(T[i], pq.top() + sum);
		pq.push(T[i] - sum);
		sum += S[i];
	}
	for (int i = 0; i < N; ++i) {
		T[i] = min(T[i], pq.top() + sum);
		pq.push(T[i] - sum);
		sum += S[i];
	}
	for (int i = 0; i < N; ++i) {
		cout << T[i] << endl;
	}
	return 0;
}
