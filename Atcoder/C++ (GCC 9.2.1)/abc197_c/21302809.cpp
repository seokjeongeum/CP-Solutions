#include <iostream>
#include <limits>
#include <vector>
using namespace std;
int A[20];
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}
	int minimum = numeric_limits<int>::max();
	for (int i = 0; i < (1 << N); ++i) {
		int current_or = 0;
		vector<int>v;
		for (int j = 0; j < N; ++j) {
			current_or |= A[j];
			if ((i & (1 << j)) != 0) {
				v.push_back(current_or);
				current_or = 0;
			}
		}
		v.push_back(current_or);
		int current_xor = 0;
		for (int j : v) {
			current_xor ^= j;
		}
		minimum = min(minimum, current_xor);
	}
	cout << minimum;
	return 0;
}
