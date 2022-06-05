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
int degrees[100001];
vector<int>neighbors[100001];
int distances[100001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	int N, Q;
	cin >> N >> Q;
	for (int i = 1; i < N; ++i) {
		int a, b;
		cin >> a >> b;
		++degrees[a];
		++degrees[b];
		neighbors[a].push_back(b);
		neighbors[b].push_back(a);
	}
	int root = 0;
	for (int i = 1; i <= N; ++i) {
		if (degrees[i] == 1) {
			root = i;
			break;
		}
	}
	queue<pair<int, int>>q;
	q.push({ root, 0 });
	while (!q.empty()) {
		pair<int, int>p = q.front();
		q.pop();
		int current = p.first;
		int distance = p.second;
		distances[current] = distance;
		for (int neighbor : neighbors[current]) {
			neighbors[neighbor].erase(remove(neighbors[neighbor].begin(), neighbors[neighbor].end(), current), neighbors[neighbor].end());
			q.push({ neighbor,distance + 1 });
		}
	}
	while (Q > 0) {
		int c, d;
		cin >> c >> d;
		if (abs(distances[c] - distances[d]) % 2 == 0) {
			cout << "Town" << endl;
		}
		else {
			cout << "Road" << endl;
		}
		--Q;
	}
	return 0;
}