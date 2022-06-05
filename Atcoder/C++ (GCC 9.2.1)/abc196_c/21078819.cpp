#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long N;
	cin >> N;
	long long i = 11;
	long long offset = 11;
	int r = 0;
	while (i <= 99) {
		if (i <= N) {
			++r;
		}
		i += offset;
	}

	i = 1010;
	offset = 101;
	while (i <= 9999) {
		if (i <= N) {
			++r;
		}
		i += offset;
	}

	i = 100100;
	offset = 1001;
	while (i <= 999999) {
		if (i <= N) {
			++r;
		}
		i += offset;
	}

	i = 10001000;
	offset = 10001;
	while (i <= 99999999) {
		if (i <= N) {
			++r;
		}
		i += offset;
	}

	i = 1000010000;
	offset = 100001;
	while (i <= 9999999999) {
		if (i <= N) {
			++r;
		}
		i += offset;
	}

	i = 100000100000;
	offset = 1000001;
	while (i <= 999999999999) {
		if (i <= N) {
			++r;
		}
		i += offset;
	}

	i = 10000001000000;
	offset = 10000001;
	while (i <= 99999999999999) {
		if (i <= N) {
			++r;
		}
		i += offset;
	}

	cout << r;
	return 0;
}