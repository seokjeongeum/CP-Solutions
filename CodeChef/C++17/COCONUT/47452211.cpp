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
		int xa, xb, Xa, Xb;
		cin >> xa >> xb >> Xa >> Xb;
		cout << Xa / xa + Xb / xb << endl;
		--T;
	}
	return 0;
}