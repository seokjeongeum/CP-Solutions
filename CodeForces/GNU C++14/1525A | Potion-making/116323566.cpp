#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t > 0) {
        int k;
        cin >> k;
        int g = gcd(k, 100 - k);
        cout << k / g + (100 - k) / g << endl;
        --t;
    }
    return 0;
}