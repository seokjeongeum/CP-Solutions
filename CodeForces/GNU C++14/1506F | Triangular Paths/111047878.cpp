#include <iostream>
#include <string>
#include <limits>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;
struct point {
 int r;
 int c;
 bool operator<(point p) {
  return r < p.r;
 }
};
point points[200001];
int main() {
 cin.sync_with_stdio(false);
 cin.tie(nullptr);
 cout.tie(nullptr);
 int t;
 cin >> t;
 while (t > 0) {
  int n;
  cin >> n;
  points[0] = { 1,1 };
  for (int i = 1; i <= n; ++i) {
   cin >> points[i].r;
  }
  for (int i = 1; i <= n; ++i) {
   cin >> points[i].c;
  }
  sort(points, points + n + 1);
  long long r = 0;
  for (int i = 0; i < n; ++i) {
   int next_r_c_difference = points[i + 1].r - points[i + 1].c;
   int current_r_c_difference = points[i].r - points[i].c;
   if ((points[i].r + points[i].c) % 2 == 0) {
    r += (next_r_c_difference - current_r_c_difference) / 2;
   }
   else {
    r += (next_r_c_difference - current_r_c_difference + 1) / 2;
   }
 
   if (next_r_c_difference == current_r_c_difference && (points[i].r + points[i].c) % 2 == 0) {
    r += points[i + 1].c - points[i].c;
   }
  }
  cout << r << endl;
  --t;
 }
 return 0;
}