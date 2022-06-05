#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	int N;
	cin >> N;
	vector<pair<int,int>>v;
	for (int i = 1; i <= N; ++i) {
		int A;
		cin >> A;
		v.push_back({ A,i });
	}
	sort(v.begin(), v.end());
	cout << v[N - 2].second << endl;
	return 0;
}