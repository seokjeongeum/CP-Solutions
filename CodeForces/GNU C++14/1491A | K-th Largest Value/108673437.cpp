#include <iostream>
#include <algorithm>
using namespace std;
int main() {
 cin.sync_with_stdio(false);
 cin.tie(nullptr);
 int n, q;
 cin >> n >> q;
 int a[100000];
 int ones = 0;
 int zeros = 0;
 for (int i = 0; i < n; ++i) {
  cin >> a[i];
  if (a[i] == 1) {
   ++ones;
  }
  if (a[i] == 0) {
   ++zeros;
  }
 }
 while (q > 0) {
  int t;
  cin >> t;
  if (t == 1) {
   int x;
   cin >> x;
   if (a[x - 1] == 1) {
    a[x - 1] = 0;
    --ones;
    ++zeros;
   }
   else if (a[x - 1] == 0) {
    a[x - 1] = 1;
    ++ones;
    --zeros;
   }
  }
  if (t == 2) {
   int k;
   cin >> k;
   if (ones >= k) {
    cout << 1 << '\n';
   }
   else {
    cout << 0 << '\n';
   }
  }
  --q;
 }
 return 0;
}