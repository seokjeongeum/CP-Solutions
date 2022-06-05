#include <iostream>
#include<algorithm>
using namespace std;
int A[100001];
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N;
	cin >> N;
	A[1] = 1;
	for (int i = 2; i <= N; ++i) {
		int maximum = 1;
		for (int j = 2; j * j <= i; ++j) {
			if (i % j == 0) {
				maximum = max(maximum, A[j]);
				maximum = max(maximum, A[i / j]);
			}
		}
		A[i] = maximum + 1;
	}
	for (int i = 1; i <= N; ++i) {
		cout << A[i] << ' ';
	}
	return 0;
}