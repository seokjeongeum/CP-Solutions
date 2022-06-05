#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
int A[100], B[100];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N;
	cin >> N;
	int maximum = 0;
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
		maximum = max(maximum, A[i]);
	}
	int minimum = 1000;
	for (int i = 0; i < N; ++i) {
		cin >> B[i];
		minimum = min(minimum, B[i]);
	}
	cout << max(0, minimum - maximum + 1) << endl;
	return 0;
}