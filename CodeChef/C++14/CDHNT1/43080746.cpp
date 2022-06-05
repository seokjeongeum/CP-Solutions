#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T > 0) {
		string S;
		cin >> S;
		int i = 0;
		for (char c : S) {
			if (c == '#') {
				++i;
			}
		}
		cout << i << endl;
		--T;
	}
	return 0;
}
