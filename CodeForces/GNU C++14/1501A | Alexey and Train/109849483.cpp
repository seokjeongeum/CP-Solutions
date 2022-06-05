#include <iostream>
using namespace std;
int a[101], b[101], tm[101];
int main() {
 cin.sync_with_stdio(false);
 cin.tie(nullptr);
 int t;
 cin >> t;
 while (t > 0) {
  int n;
  cin >> n;
  for (int i = 1; i <= n; ++i) {
   cin >> a[i] >> b[i];
  }
  for (int i = 1; i <= n; ++i) {
   cin >> tm[i];
  }
  int current = 0;
  for (int i = 1; i < n; ++i) {
   current += a[i] - b[i - 1] + tm[i];
   //cout << "arrives " << i << " at " << current << endl;
   int time = (b[i] - a[i]) / 2;
   if ((b[i] - a[i]) % 2 != 0) {
    ++time;
   }
   current = max(current + time, b[i]);
   //cout << "departs " << i << " at " << current << endl;
  }
  current += a[n] - b[n - 1] + tm[n];
  //cout << "arrives " << n << " at " << current << endl;
  cout << current << endl;
  --t;
 }
 return 0;
}