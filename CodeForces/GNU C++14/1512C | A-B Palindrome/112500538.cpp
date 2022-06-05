#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main() {
 cin.sync_with_stdio(false);
 cin.tie(nullptr);
 cout.tie(nullptr);
 int t;
 cin >> t;
 while (t > 0) {
  int a, b;
  cin >> a >> b;
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n / 2; ++i) {
   if (s[i] == '0' && s[n - 1 - i] == '?') {
    s[n - 1 - i] = '0';
   }
   if (s[i] == '1' && s[n - 1 - i] == '?') {
    s[n - 1 - i] = '1';
   }
   if (s[i] == '?' && s[n - 1 - i] == '0') {
    s[i] = '0';
   }
   if (s[i] == '?' && s[n - 1 - i] == '1') {
    s[i] = '1';
   }
   if (s[i] == '0' && s[n - 1 - i] == '0') {
    a -= 2;
   }
   if (s[i] == '1' && s[n - 1 - i] == '1') {
    b -= 2;
   }
  }
  for (int i = 0; i < n / 2; ++i) {
   if (s[i] == '?' && s[n - 1 - i] != '1' && a >= 2 ) {
    a -= 2;
    s[i] = s[n - 1 - i] = '0';
   }
   if (s[i] == '?' && s[n - 1 - i] != '0' && b >= 2 ) {
    b -= 2;
    s[i] = s[n - 1 - i] = '1';
   }
  }
  if (n % 2 != 0) {
   if (s[n / 2] == '0' || (s[n / 2] == '?' && a >= 1)) {
    --a;
    s[n / 2] = '0';
   }
   if (s[n / 2] == '1' || (s[n / 2] == '?' && b >= 1)) {
    --b;
    s[n / 2] = '1';
   }
  }
  if (a == 0 && b == 0) {
   cout << s << endl;
  }
  else {
   cout << -1 << endl;
  }
  --t;
 }
 return 0;
}