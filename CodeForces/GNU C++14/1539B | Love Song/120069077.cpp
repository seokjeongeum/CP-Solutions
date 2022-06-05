#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
#include <utility>
#include <unordered_map>
using namespace std;
int counts[100000][27];
int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 cout.tie(nullptr);
 cout.precision(numeric_limits<double>::max_digits10);
 int n, q;
 cin >> n >> q;
 string s;
 cin >> s;
 for (int i = 1; i <= n; ++i) {
  for (int j = 1; j <= 26; ++j) {
   counts[i][j] = counts[i - 1][j];
  }
  ++counts[i][s[i - 1] - 'a' + 1];
 }
 while (q > 0) {
  int l, r;
  cin >> l >> r;
  int sum = 0;
  for (int j = 1; j <= 26; ++j) {
   sum += counts[r][j] * j;
   sum -= counts[l - 1][j] * j;
  }
  cout << sum << endl;
  --q;
 }
 return 0;
}