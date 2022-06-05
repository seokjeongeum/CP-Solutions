#include <iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T > 0) {
		int N;
		cin >> N;
		bool b = false;
		while (N > 0) {
			if (N % 10 == 7) {
				b = true;
			}
			N /= 10;
		}
		if (b) {
			cout << "True" << endl;
		}
		else {
			cout << "False" << endl;
		}
		--T;
	}
	return 0;
}