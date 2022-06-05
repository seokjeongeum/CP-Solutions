#include <iostream>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	int M, H;
	cin >> M >> H;
	if (H % M == 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}
