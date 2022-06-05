#include <iostream>
#include <queue>
#include <tuple>
#include <limits>
#include <unordered_map>
#include <stack>
#include <set>
#include <deque>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <map>
#include <numeric>
using namespace std;
int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	std::cout.precision(std::numeric_limits<double>::max_digits10);
	int N, K;
	cin >> N >> K;
	vector<int>A(N);
	vector<int>mins(N);
	vector<int>maxs(N);
	for (int i = 0;i < N;++i) {
		cin >> A[i];
	}
	mins[K - 1] = A[K - 1];
	for (int i = K - 2;i >= 0;--i) {
		mins[i] = min(A[i], mins[i + 1]);
	}
	maxs[K] = A[K];
	for (int i = K + 1;i < N;++i) {
		maxs[i] = max(A[i], maxs[i - 1]);
	}
	int left = 0;
	int right = N - 1;
	while (left <= right) {
		int middle = (left + right) / 2;
		bool found = false;
		for (int i = K;i < N;++i) {
			found |= 0 <= i - middle && i - middle < K&& mins[i - middle] < maxs[i];
		}
		if (found) {
			right = middle - 1;
		}
		else {
			left = middle + 1;
		}
	}
	if (left == N) {
		left = -1;
	}
	cout << left;
	return 0;
}
