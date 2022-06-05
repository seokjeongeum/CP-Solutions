#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
int a[100];
int main() {
 cin.sync_with_stdio(false);
 cin.tie(nullptr);
 cout.tie(nullptr);
 int t;
 cin >> t;
 while (t > 0) {
  int n;
  cin >> n;
  unordered_map<int, int>um;
  for (int i = 0; i < n; ++i) {
   cin >> a[i];
   ++um[a[i]];
  }
  for (int i = 0; i < n; ++i) {
   if (um[a[i]] == 1) {
    cout << i + 1 << endl;
    break;
   }
  }
  --t;
 }
 return 0;
}