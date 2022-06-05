#include <iostream>
#include <deque>
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <limits>
using namespace std;
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int sum = 0;
	int k = 1;
	while (sum < N) {
		sum += k;
		++k;
	}
	cout << k - 1 << endl;
	return 0;
}