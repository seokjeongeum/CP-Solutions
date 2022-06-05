#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
#include <utility>
#include <unordered_map>
using namespace std;
struct house {
	int i;
	int x;
	int y;
};
house houses[200000];
int house1s[6];
int house2s[6];
int distances[6];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		int x, y;
		cin >> x >> y;
		houses[i] = { i,x,y };
	}
	sort(houses, houses + N, [](house h1, house h2) {
		return h1.x < h2.x;
		});
	house1s[0] = min({ houses[0].i, houses[N - 1].i });
	house2s[0] = max({ houses[0].i, houses[N - 1].i });
	distances[0] = abs(houses[0].x - houses[N - 1].x);
	house1s[1] = min({ houses[1].i, houses[N - 1].i });
	house2s[1] = max({ houses[1].i, houses[N - 1].i });
	distances[1] = abs(houses[1].x - houses[N - 1].x);
	house2s[2] = min({ houses[0].i, houses[N - 2].i });
	house2s[2] = max({ houses[0].i, houses[N - 2].i });
	distances[2] = abs(houses[0].x - houses[N - 2].x);
	sort(houses, houses + N, [](house h1, house h2) {
		return h1.y < h2.y;
		});
	int j = 3;
	int minimum = min({ houses[0].i, houses[N - 1].i });
	int maximum = max({ houses[0].i, houses[N - 1].i });
	bool b = true;
	for (int i = 0; i < j; ++i) {
		if (house1s[i] == minimum && house2s[i] == maximum) {
			distances[i] = max(distances[i], abs(houses[0].y - houses[N - 1].y));
			b = false;
			break;
		}
	}
	if (b) {
		distances[j] = abs(houses[0].y - houses[N - 1].y);
		++j;
	}
	minimum = min({ houses[1].i, houses[N - 1].i });
	maximum = max({ houses[1].i, houses[N - 1].i });
	b = true;
	for (int i = 0; i < j; ++i) {
		if (house1s[i] == minimum && house2s[i] == maximum) {
			distances[i] = max(distances[i], abs(houses[1].y - houses[N - 1].y));
			b = false;
			break;
		}
	}
	if (b) {
		distances[j] = abs(houses[1].y - houses[N - 1].y);
		++j;
	}
	minimum = min({ houses[0].i, houses[N - 2].i });
	maximum = max({ houses[0].i, houses[N - 2].i });
	b = true;
	for (int i = 0; i < j; ++i) {
		if (house1s[i] == minimum && house2s[i] == maximum) {
			distances[i] = max(distances[i], abs(houses[0].y - houses[N - 2].y));
			b = false;
			break;
		}
	}
	if (b) {
		distances[j] = abs(houses[0].y - houses[N - 2].y);
		++j;
	}
	priority_queue<int>pq;
	for (int i = 0; i < j; ++i) {
		pq.push(distances[i]);
	}
	pq.pop();
	cout << pq.top() << endl;
	return 0;
}