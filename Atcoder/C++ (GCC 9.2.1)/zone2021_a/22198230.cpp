#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	string S;
	cin >> S;
	int i = 0;
	int count = 0;
	while (S.find("ZONe", i) != string::npos) {
		i = S.find("ZONe", i) + 1;
		++count;
	}
	cout << count << endl;
	return 0;
}