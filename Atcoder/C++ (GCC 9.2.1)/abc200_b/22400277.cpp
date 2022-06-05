#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <limits>
#include <queue>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long N;
	int K;
	cin >> N >> K;
	while (K > 0) {
		if (N % 200 == 0) {
			N /= 200;
		}
		else {
			N *= 1000;
			N += 200;
		}
		--K;
	}
	cout << N << endl;
	return 0;
}
