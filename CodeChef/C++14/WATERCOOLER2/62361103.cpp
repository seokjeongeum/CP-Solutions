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
	int T;
	cin >> T;
	while (T) {
		int X, Y;
		cin >> X >> Y;
		int dividend = Y / X;
		if (Y % X == 0) {
			--dividend;
		}
		cout << dividend << endl;
		--T;
	}
	return 0;
}
