#include <iostream>
#include <string>
using namespace std;
int main() {
	string S;
	cin >> S;
	cout << S.substr(1, S.size() - 1) + S[0] << endl;
	return 0;
}
