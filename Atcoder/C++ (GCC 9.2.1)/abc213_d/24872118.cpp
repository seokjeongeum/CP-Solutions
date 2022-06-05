#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
#include <stack>
using namespace std;
vector<set<int>>graph;
vector<int>sequence;
vector<bool>v;
void dfs(int i) {
	sequence.push_back(i);
	for (int neighbor : graph[i]) {
		if (!v[neighbor]) {
			v[neighbor] = true;
			dfs(neighbor);
			sequence.push_back(i);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	int N;
	cin >> N;
	graph = vector<set<int>>(N + 1);
	for (int i = 1; i < N; ++i) {
		int A, B;
		cin >> A >> B;
		graph[A].insert(B);
		graph[B].insert(A);
	}
	v = vector<bool>(N + 1, false);
	v[1] = true;
	dfs(1);
	for (int i : sequence) {
		cout << i << ' ';
	}
	return 0;
}