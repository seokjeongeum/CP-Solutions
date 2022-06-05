#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int W[51], V[51];
int X[51];
bool is_baggage_used[51];
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	int N, M, Q;
	cin >> N >> M >> Q;
	for (int i = 1; i <= N; ++i) {
		cin >> W[i] >> V[i];
	}
	for (int i = 1; i <= M; ++i) {
		cin >> X[i];
	}
	while (Q > 0) {
		for (int i = 1; i <= N; ++i) {
			is_baggage_used[i] = false;
		}
		int L, R;
		cin >> L >> R;
		vector<int>boxes;
		for (int i = 1; i <= M; ++i) {
			if (i<L || i>R) {
				boxes.push_back(X[i]);
			}
		}
		sort(boxes.begin(), boxes.end());
		int r = 0;
		for (int box : boxes) {
			int index = 0;
			int maximum = 0;
			for (int i = 1; i <= N; ++i) {
				if (!is_baggage_used[i] && W[i] <= box && maximum < V[i]) {
					index = i;
					maximum = V[i];
				}
			}
			if (index != 0) {
				is_baggage_used[index] = true;
				r += maximum;
			}
		}
		cout << r << endl;
		--Q;
	}
	return 0;
}
