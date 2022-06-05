#include <iostream>
#include <string>
using namespace std;
char squares[100][100];
int main() {
	int H, W, X, Y;
	cin >> H >> W >> X >> Y;
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			cin >> squares[i][j];
		}
	}
	int r = 1;
	for (int i = 1; Y - 1 + i < W && squares[X - 1][Y - 1 + i] == '.'; ++i) {
		++r;
	}
	for (int i = 1; Y - 1 - i >= 0 && squares[X - 1][Y - 1 - i] == '.'; ++i) {
		++r;
	}
	for (int i = 1; X - 1 + i < H && squares[X - 1 + i][Y - 1] == '.'; ++i) {
		++r;
	}
	for (int i = 1; X - 1 - i >= 0 && squares[X - 1 - i][Y - 1] == '.'; ++i) {
		++r;
	}
	cout << r;
	return 0;
}
