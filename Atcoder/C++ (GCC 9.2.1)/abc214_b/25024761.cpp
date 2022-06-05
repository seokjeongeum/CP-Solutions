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
	int S, T;
	cin >> S >> T;
	int count = 0;
	for (int a = 0; a <= S; ++a) {
		for (int b = 0; a + b <= S; ++b) {
			for (int c = 0; a + b + c <= S; ++c) {
				if (a * b * c <= T) {
					++count;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}
