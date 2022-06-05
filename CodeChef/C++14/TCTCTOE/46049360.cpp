#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <limits>
#include <queue>
using namespace std;
int
d[3][3][3]
[3][3][3]
[3][3][3];
int solve(int states[3][3]) {
	int& r =
		d[states[0][0]][states[0][1]][states[0][2]]
		[states[1][0]][states[1][1]][states[1][2]]
		[states[2][0]][states[2][1]][states[2][2]];
	if (r != 0) {
		return r;
	}
	int x_count = 0;
	int o_count = 0;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (states[i][j] == 1) {
				++x_count;
			}
			if (states[i][j] == 2) {
				++o_count;
			}
		}
	}
	if (x_count != o_count && x_count != o_count + 1) {
		return r = 3;
	}
	bool unreachable = true;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if ((states[i][j] == 1 && x_count == o_count + 1) || (states[i][j] == 2 && x_count == o_count)) {
				int temp = states[i][j];
				states[i][j] = 0;
				if (solve(states) == 2) {
					unreachable = false;
				}
				states[i][j] = temp;
			}
		}
	}
	if (unreachable) {
		return r = 3;
	}
	for (int i = 0; i < 3; ++i) {
		bool has_ended = true;
		for (int j = 0; j < 3; ++j) {
			if (states[i][0] != states[i][j]) {
				has_ended = false;
			}
		}
		if (states[i][0] != 0 && has_ended) {
			return r = 1;
		}
		has_ended = true;
		for (int j = 0; j < 3; ++j) {
			if (states[0][i] != states[j][i]) {
				has_ended = false;
			}
		}
		if (states[0][i] != 0 && has_ended) {
			return r = 1;
		}
	}
	if (states[1][1] != 0 && states[0][0] == states[1][1] && states[1][1] == states[2][2]) {
		return r = 1;
	}
	if (states[1][1] != 0 && states[0][2] == states[1][1] && states[1][1] == states[2][0]) {
		return r = 1;
	}
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (states[i][j] == 0) {
				return r = 2;
			}
		}
	}
	return r = 1;
}
int char_to_int(char c) {
	switch (c) {
	case '_':
		return 0;
	case 'X':
		return 1;
	case 'O':
		return 2;
	}
}
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	d[0][0][0][0][0][0][0][0][0] = 2;
	int T;
	cin >> T;
	while (T > 0) {
		string s;
		cin >> s;
		int state00 = char_to_int(s[0]), state01 = char_to_int(s[1]), state02 = char_to_int(s[2]);
		cin >> s;
		int state10 = char_to_int(s[0]), state11 = char_to_int(s[1]), state12 = char_to_int(s[2]);
		cin >> s;
		int state20 = char_to_int(s[0]), state21 = char_to_int(s[1]), state22 = char_to_int(s[2]);
		int states[3][3] = {
			{state00,state01,state02},
			{state10,state11,state12},
			{state20,state21,state22} };
		cout << solve(states) << endl;
		--T;
	}
	return 0;
}
