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
	int N;
	cin >> N;
	int century = N / 100;
	if (N % 100 != 0) {
		++century;
	}
	cout << century << endl;
	return 0;
}
