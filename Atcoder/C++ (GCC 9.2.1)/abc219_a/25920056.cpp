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
	string S1, S2, S3, T;
	cin >> S1 >> S2 >> S3 >> T;
	string s;
	for (char c : T) {
		switch (c) {
		case '1':
			s += S1;
			break;
		case '2':
			s += S2;
			break;
		case '3':
			s += S3;
			break;
		}
	}
	cout << s << endl;
	return 0;
}
