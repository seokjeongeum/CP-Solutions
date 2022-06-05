#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
string s[400];
int main() {
 cin.sync_with_stdio(false);
 cin.tie(nullptr);
 cout.tie(nullptr);
 int t;
 cin >> t;
 while (t > 0) {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
   cin >> s[i];
  }
  int minimum_r = 400;
  int maximum_r = 0;
  int minimum_c = 400;
  int maximum_c = 0;
  for (int i = 0; i < n; ++i) {
   for (int j = 0; j < n; ++j) {
    if (s[i][j] == '*') {
     minimum_r = min(minimum_r, i);
     maximum_r = max(maximum_r, i);
     minimum_c = min(minimum_c, j);
     maximum_c = max(maximum_c, j);
    }
   }
  }
  if (minimum_r != maximum_r && minimum_c != maximum_c) {
   s[minimum_r][minimum_c] = s[maximum_r][maximum_c] = s[minimum_r][maximum_c] = s[maximum_r][minimum_c] = '*';
  }
  else if (minimum_r == maximum_r) {
   if (minimum_r - 1 >= 0) {
    s[minimum_r - 1][minimum_c] = s[minimum_r - 1][maximum_c] = '*';
   }
   else {
    s[minimum_r + 1][minimum_c] = s[minimum_r + 1][maximum_c] = '*';
   }
  }
  else if (minimum_c == maximum_c) {
   if (minimum_c - 1 >= 0) {
    s[minimum_r][minimum_c - 1] = s[maximum_r][minimum_c - 1] = '*';
   }
   else {
    s[minimum_r][minimum_c + 1] = s[maximum_r][minimum_c + 1] = '*';
   }
  }
  for (int i = 0; i < n; ++i) {
   cout << s[i] << endl;
  }
  --t;
 }
 return 0;
}