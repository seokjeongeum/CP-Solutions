#include <iostream>
#include <deque>
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <limits>
#include <unordered_map>
using namespace std;
int bits[32];
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	while (T > 0) {
		for (int i = 0; i < 32; ++i) {
			bits[i] = 0;
		}
		int N, K;
		cin >> N >> K;
		for (int i = 0; i < N; ++i) {
			int A;
			cin >> A;
			for (int j = 0; j < 32; ++j) {
				if ((A & (1 << j)) != 0) {
					++bits[j];
				}
			}
		}
		int answer = 0;
		for (int i = 0; i < 32; ++i) {
			answer += bits[i] / K;
			if (bits[i] % K != 0) {
				++answer;
			}
		}
		cout << answer << endl;
		--T;
	}
	return 0;
}