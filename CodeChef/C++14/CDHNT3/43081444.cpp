#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	cin >> N;
	int a[1000];
	for (int i = 0; i < N; ++i) {
		cin >> a[i];
	}
	sort(a, a + N);
	int minimum_index = 0;
	int cut = 0;
	while (minimum_index != N) {
		cut = a[minimum_index];
		cout << N - minimum_index << '\n';
		while (minimum_index < N && a[minimum_index] == cut) {
			++minimum_index;
		}
	}
	return 0;
}
