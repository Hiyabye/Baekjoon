#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int x; cin >> x;

  int ans = 0;
  while (n--) {
    int p1, p2; cin >> p1 >> p2;
    if (abs(p1 - p2) <= x) {
      ans += max(p1, p2);
    } else {
      int p3; cin >> p3;
      ans += p3;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}