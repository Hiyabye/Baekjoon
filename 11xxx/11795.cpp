#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int t; cin >> t;

  int a = 0, b = 0, c = 0;
  while (t--) {
    int x, y, z; cin >> x >> y >> z;
    a += x; b += y; c += z;
    if (a < 30 || b < 30 || c < 30) { cout << "NO\n"; continue; }
    int d = min({a, b, c});
    a -= d; b -= d; c -= d;
    cout << d << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}