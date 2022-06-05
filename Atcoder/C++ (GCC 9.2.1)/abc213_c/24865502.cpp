#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	int H, W, N;
	cin >> H >> W >> N;
	vector<int>A(N);
	vector<int>B(N);
	set<int>row_set;
	set<int>column_set;
	for (int i = 0; i < N; ++i) {
		cin >> A[i] >> B[i];
		row_set.insert(A[i]);
		column_set.insert(B[i]);
	}
	unordered_map<int, int>row_map;
	int current_row = 1;
	for (int row : row_set) {
		row_map[row] = current_row;
		++current_row;
	}
	unordered_map<int, int>column_map;
	int current_column = 1;
	for (int column : column_set) {
		column_map[column] = current_column;
		++current_column;
	}
	for (int i = 0; i < N; ++i) {
		cout << row_map[A[i]] << ' ' << column_map[B[i]] << endl;
	}
	return 0;
}