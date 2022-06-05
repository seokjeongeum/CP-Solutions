#include <iostream>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int A, B, C;
	cin >> A >> B >> C;
	if (A == B || A == C || B == C) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
