#include <iostream>
using namespace std;
int main() {
 cin.sync_with_stdio(false);
 cin.tie(nullptr);
 int t;
 cin >> t;
 while (t > 0) {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int left = 0;
  int right = n - 1;
  while (left + 1 < right && s[left] == s[right]) {
   ++left;
   --right;
  }
  if (left >= k) {
   cout << "YES" << endl;
  }
  else {
   cout << "NO" << endl;
  }
  --t;
 }
 return 0;
}