#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout.precision(numeric_limits<double>::max_digits10);
	int A, B;
	cin >> A >> B;
	cout << (A ^ B) << endl;
	return 0;
}