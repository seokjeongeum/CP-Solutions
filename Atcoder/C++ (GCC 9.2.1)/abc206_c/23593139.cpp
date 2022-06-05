#include <iostream>
#include <deque>
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <limits>
#include <unordered_map>
using namespace std;
int A[300000];
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}
	sort(A, A + N);
	int current = 0;
	int size = 0;
	long long sum = 0;
	for (int i = 0; i < N; ++i) {
		if (current != A[i]) {
			sum += (long long)size * (N - i);
			current = A[i];
			size = 0;
		}
		++size;
	}
	cout << sum << endl;
	return 0;
}