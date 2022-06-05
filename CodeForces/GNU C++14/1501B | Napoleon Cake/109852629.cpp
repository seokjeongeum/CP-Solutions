#include <iostream>
using namespace std;
int a[200000], drenched[200000];
int main() {
 cin.sync_with_stdio(false);
 cin.tie(nullptr);
 int t;
 cin >> t;
 while (t > 0) {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
   cin >> a[i];
   drenched[i] = 0;
  }
  int remaining = 0;
  for (int i = n - 1; i >= 0; --i) {
   remaining = max(remaining, a[i]);
   if (remaining > 0) {
    drenched[i] = 1;
   }
   --remaining;
  }
  for (int i = 0; i < n; ++i) {
   cout << drenched[i] << ' ';
  }
  cout << endl;
  --t;
 }
 return 0;
}