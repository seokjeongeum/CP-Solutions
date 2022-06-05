#include <iostream>
#include<algorithm>
using namespace std;
int A[100001];
int main() {
 cin.sync_with_stdio(false);
 cin.tie(nullptr);
 cout.tie(nullptr);
 int t;
 cin >> t;
 while (t > 0) {
  int a, b;
  cin >> a >> b;
  cout << a * b << endl;
  --t;
 }
 return 0;
}