#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	int N, D, H;
	cin >> N >> D >> H;
	double maximum = 0;
	while (N > 0) {
		int d, h;
		cin >> d >> h;
		maximum = max(maximum, h - (double)(H - h) / (D - d) * d);
		--N;
	}
	cout << fixed << maximum << endl;
	return 0;
}