#include <algorithm>
#include <iostream>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b) {
  return a / gcd(a, b) * b;
}

void solve(void) {
  int k; cin >> k;

  int ans = 1e9;
  while (k--) {
    int y, c1, c2; cin >> y >> c1 >> c2;
    ans = min(ans, y + lcm(c1, c2));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}