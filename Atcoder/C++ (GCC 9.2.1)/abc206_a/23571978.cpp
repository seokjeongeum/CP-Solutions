#include <iostream>
#include <deque>
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <limits>
using namespace std;
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int tax_included_price = 1.08 * N;
	if (tax_included_price < 206) {
		cout << "Yay!" << endl;
	}
	else if (tax_included_price == 206) {
		cout << "so-so" << endl;
	}
	else {
		cout << ":(" << endl;
	}
	return 0;
}