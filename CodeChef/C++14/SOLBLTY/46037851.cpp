#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <limits>
#include <queue>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	cin >> T;
	while (T > 0) {
		int X, A, B;
		cin >> X >> A >> B;
		cout << (A + (100 - X) * B) * 10 << endl;
		--T;
	}
	return 0;
}
