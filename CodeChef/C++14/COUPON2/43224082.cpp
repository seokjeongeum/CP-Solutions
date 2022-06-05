#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	int T;
	cin >> T;
	while (T > 0) {
		int D, C;
		cin >> D >> C;
		int A1, A2, A3;
		cin >> A1 >> A2 >> A3;
		int B1, B2, B3;
		cin >> B1 >> B2 >> B3;
		int coupon = C;
		if (A1 + A2 + A3 < 150) {
			coupon += D;
		}
		if (B1 + B2 + B3 < 150) {
			coupon += D;
		}
		int no_coupon = 2 * D;
		if (coupon < no_coupon) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
		--T;
	}
	return 0;
}
