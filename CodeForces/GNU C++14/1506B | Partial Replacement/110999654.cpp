#include <iostream>
#include <string>
using namespace std;
int main() {
 cin.sync_with_stdio(false);
 cin.tie(nullptr);
 cout.tie(nullptr);
 int t;
 cin >> t;
 while (t > 0) {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int i, j;
  for (int l = 0; l < n; ++l) {
   if (s[l] == '*') {
    j = l;
   }
  }
  for (int l = n - 1; l >= 0; --l) {
   if (s[l] == '*') {
    i = l;
   }
  }
  int r = 0;
  if (i != j) {
   r += 2;
  }
  else {
   r += 1;
  }
  while (j - i > k) {
   i += k;
   while (s[i] != '*') {
    --i;
   }
   ++r;
  }
  cout << r << endl;
  --t;
 }
 return 0;
}