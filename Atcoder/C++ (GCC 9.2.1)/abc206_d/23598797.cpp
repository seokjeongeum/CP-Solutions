#include <iostream>
#include <deque>
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <limits>
#include <unordered_map>
using namespace std;
int A[200000];
int roots[200001];
int find(int x) {
	if (roots[x] == x) {
		return x;
	}
	else {
		return roots[x] = find(roots[x]);
	}
}
void union_set(int x, int y) {
	roots[find(y)] = find(x);
}
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
	for (int i = 1; i <= 200000; ++i) {
		roots[i] = i;
	}
	int count = 0;
	for (int i = 0; i < N / 2; ++i) {
		if (find(A[i]) != find(A[N - 1 - i])) {
			++count;
			union_set(A[i], A[N - 1 - i]);
		}
	}
	cout << count << endl;
	return 0;
}