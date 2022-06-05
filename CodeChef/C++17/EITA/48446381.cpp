#include <iostream>
#include <deque>
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <limits>
#include <unordered_map>
using namespace std;
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	while (T > 0) {
		int d, x, y, z;
		cin >> d >> x >> y >> z;
		cout << max(7 * x, y * d + z * (7 - d)) << endl;
		--T;
	}
	return 0;
}