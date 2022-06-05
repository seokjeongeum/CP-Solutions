#include <iostream>
using namespace std;

int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	double A, B;
	cin >> A >> B;
	cout << (A - B) / A * 100 << '\n';
	return 0;
}
