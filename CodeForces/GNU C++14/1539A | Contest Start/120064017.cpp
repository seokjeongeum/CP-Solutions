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
int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 cout.tie(nullptr);
 cout.precision(numeric_limits<double>::max_digits10);
 int k;
 cin >> k;
 while (k > 0) {
  long long n, x, t;
  cin >> n >> x >> t;
  long long q = min(n - 1, t / x);
  cout << q * (q + 1) / 2 + (n - 1 - q) * q << endl;
  --k;
 }
 return 0;
}