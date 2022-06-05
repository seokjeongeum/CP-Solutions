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
	int N;
	cin >> N;
	deque<int>A(N);
	for (int i = 0;i < N;++i) {
		cin >> A[i];
	}
	int flipped = 0;
	bool possible = true;
	while (N) {
		if (A.back() == flipped) {
			A.pop_back();
		}
		else if (A.front() == flipped) {
			A.pop_front();
			flipped = 1 - flipped;
		}
		else {
			possible = false;
			break;
		}
		--N;
	}
	if (possible) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}
