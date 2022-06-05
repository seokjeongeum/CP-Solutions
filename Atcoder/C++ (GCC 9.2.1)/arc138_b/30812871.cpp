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
	bool flipped = false;
	for (int i = 0;i < N;++i) {
		cin >> A[i];
	}
	bool possible = true;
	while (N) {
		if (flipped) {
			if (A.back() == 1) {
				A.pop_back();
			}
			else if (A.front() == 1) {
				A.pop_front();
				flipped = !flipped;
			}
			else {
				possible = false;
				break;
			}
		}
		else {
			if (A.back() == 0) {
				A.pop_back();
			}
			else if (A.front() == 0) {
				A.pop_front();
				flipped = !flipped;
			}
			else {
				possible = false;
				break;
			}
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
