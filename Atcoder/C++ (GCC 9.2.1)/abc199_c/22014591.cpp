#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N;
	cin >> N;
	string S;
	cin >> S;
	int Q;
	cin >> Q;
	bool flip = false;
	while (Q > 0) {
		int T, A, B;
		cin >> T >> A >> B;
		switch (T) {
		case 1: {
			if (flip) {
				A += N;
				if (A > 2 * N) {
					A %= 2 * N;
				}
				B += N;
				if (B > 2 * N) {
					B %= 2 * N;
				}
			}
			char temp = S[A - 1];
			S[A - 1] = S[B - 1];
			S[B - 1] = temp;
			break;
		}
		case 2:
			flip = !flip;
			break;
		}
		--Q;
	}
	if (flip) {
		cout << S.substr(N, N) + S.substr(0, N) << endl;
	}
	else {
		cout << S << endl;
	}
	return 0;
}