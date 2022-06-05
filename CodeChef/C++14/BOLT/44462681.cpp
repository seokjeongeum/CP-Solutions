#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	cin >> T;
	while (T > 0) {
		double k1, k2, k3, v;
		cin >> k1 >> k2 >> k3 >> v;
		if (round(100 / k1 / k2 / k3 / v * 100) < 958) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		--T;
	}
	return 0;
}
