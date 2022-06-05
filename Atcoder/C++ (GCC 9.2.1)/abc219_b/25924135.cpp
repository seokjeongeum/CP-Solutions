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
	//freopen("weak_typing_chapter_1_input.txt", "r", stdin);
	//freopen(".out", "w", stdout);
	int X;
	cin >> X;
	if (X < 40) {
		cout << 40 - X << endl;
	}
	else if (X < 70) {
		cout << 70 - X << endl;
	}
	else if (X < 90) {
		cout << 90 - X << endl;
	}
	else {
		cout << "expert" << endl;
	}
	return 0;
}
