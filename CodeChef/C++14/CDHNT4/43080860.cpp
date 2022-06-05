#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T > 0) {
		int N;
		cin >> N;
		long long F = 1;
		while (N > 0) {
			F *= N;
			--N;
		}
		cout << F << endl;
		--T;
	}
	return 0;
}
