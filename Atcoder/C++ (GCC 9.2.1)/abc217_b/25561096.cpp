#include <iostream>
#include <queue>
#include <tuple>
#include <limits>
#include <unordered_map>
#include <stack>
#include <set>
#include <unordered_map>
#include <deque>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	string S1, S2, S3;
	cin >> S1 >> S2 >> S3;
	for (string s :{ "ABC","ARC","AGC","AHC" }) {
		if (s != S1 && s != S2 && s != S3) {
			cout << s << endl;
		}
	}
	return 0;
}
