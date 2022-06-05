#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	cin >> N;
	int occurences[10001]{};
	for (int i = 0; i < N; ++i) {
		int ID;
		cin >> ID;
		++occurences[ID];
	}
	int maximum = 0;
	int index = 0;
	for (int i = 0; i <= 10000; ++i) {
		if (occurences[i] >= maximum) {
			maximum = occurences[i];
			index = i;
		}
	}
	cout << index << '\n';
	return 0;
}
