#include <iostream>
using namespace std;
int main() {
 cin.sync_with_stdio(false);
 cin.tie(nullptr);
 cout.tie(nullptr);
 int t;
 cin >> t;
 while (t > 0) {
  long long n, m, x;
  cin >> n >> m >> x;
  long long column = (x - 1) / n;
  long long row = (x - 1) % n;
  cout << row * m + column + 1 << endl;
  --t;
 }
 return 0;
}