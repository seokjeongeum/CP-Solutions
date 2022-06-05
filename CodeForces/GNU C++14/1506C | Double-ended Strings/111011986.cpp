#include <iostream>
#include <string>
#include <limits>
#include <algorithm>
using namespace std;
int d[21][21][21][21];
string a, b;
int solve(int a1, int a2, int b1, int b2) {
 int& r = d[a1][a2][b1][b2];
 if (r != -1) {
  return r;
 }
 if (a.substr(a1, a2) == b.substr(b1, b2)) {
  return r = 0;
 }
 r = numeric_limits<int>::max();
 if (a2 >= 1) {
  r = min(r, solve(a1, a2 - 1, b1, b2) + 1);
  r = min(r, solve(a1 + 1, a2 - 1, b1, b2) + 1);
 }
 if (b2 >= 1) {
  r = min(r, solve(a1, a2, b1, b2 - 1) + 1);
  r = min(r, solve(a1, a2, b1 + 1, b2 - 1) + 1);
 }
 return r;
}
int main() {
 cin.sync_with_stdio(false);
 cin.tie(nullptr);
 cout.tie(nullptr);
 int t;
 cin >> t;
 while (t > 0) {
  cin >> a;
  cin >> b;
  int a2 = a.size();
  int b2 = b.size();
  for (int i = 0; i <= a2; ++i) {
   for (int j = 0; j <= a2; ++j) {
    for (int k = 0; k <= b2; ++k) {
     for (int l = 0; l <= b2; ++l) {
      d[i][j][k][l] = -1;
     }
    }
   }
  }
  cout << solve(0, a2, 0, b2) << endl;
  --t;
 }
 return 0;
}