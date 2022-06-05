#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	long long N;
	cin >> N;
	long long answer = 0;
	answer += max(0LL, min(N, 1000000LL - 1LL) % 1000000LL - 999LL) * 1;
	answer += max(0LL, min(N, 1000000000LL - 1LL) % 1000000000LL - 999999LL) * 2;
	answer += max(0LL, min(N, 1000000000000LL - 1LL) % 1000000000000LL - 999999999LL) * 3;
	answer += max(0LL, min(N, 1000000000000000LL - 1LL) % 1000000000000000LL - 999999999999LL) * 4;
	answer += max(0LL, min(N, 1000000000000000000LL - 1LL) % 1000000000000000000LL - 999999999999999LL) * 5;
	cout << answer;
	return 0;
}
