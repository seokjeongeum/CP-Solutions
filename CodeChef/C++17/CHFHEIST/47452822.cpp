#include <iostream>
#include <deque>
using namespace std;
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	while (T > 0) {
		long long D, d, P, Q;
		cin >> D >> d >> P >> Q;
		cout << D * P + d * Q * (D / d) * (D / d - 1) / 2 + (D % d) * (D / d) * Q << endl;
		--T;
	}
	return 0;
}