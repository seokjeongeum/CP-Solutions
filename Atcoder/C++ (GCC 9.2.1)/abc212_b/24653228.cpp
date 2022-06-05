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
	int X;
	cin >> X;
	int X1 = X / 1000;
	int X2 = X % 1000 / 100;
	int X3 = X % 100 / 10;
	int X4 = X % 10;
	if ((X1 == X2 && X1 == X3 && X1 == X4) || ((X1 + 1) % 10 == X2 && (X2 + 1) % 10 == X3 && (X3 + 1) % 10 == X4)) {
		cout << "Weak" << endl;
	}
	else {
		cout << "Strong" << endl;
	}
	return 0;
}
