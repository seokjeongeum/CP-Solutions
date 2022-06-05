#include <iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T > 0) {
		int C;
		cin >> C;
		long long A = 0;
		long long B = 0;
		bool b = true;
		int i = 0;
		while ((1 << i) <= C) {
			++i;
		}
		--i;
		for (; i >= 0; --i) {
			if ((C & (1 << i)) == 0) {
				A |= (1 << i);
				B |= (1 << i);
			}
			else {
				if (b) {
					A |= (1 << i);
				}
				else {
					B |= (1 << i);
				}
				b = false;
			}
		}
		cout << A * B << endl;
		--T;
	}
	return 0;
}