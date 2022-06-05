#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	int A, B;
	cin >> A >> B;
	if (B == 0) {
		cout << "Gold" << endl;
	}
	else if (A == 0) {
		cout << "Silver" << endl;
	}
	else {
		cout << "Alloy" << endl;
	}
	return 0;
}
