#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b) {
  return a * b / gcd(a, b);
}

void solve(void) {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  int ans = lcm(lcm(a, b), c);
  ans = min(ans, lcm(lcm(a, b), d));
  ans = min(ans, lcm(lcm(a, b), e));
  ans = min(ans, lcm(lcm(a, c), d));
  ans = min(ans, lcm(lcm(a, c), e));
  ans = min(ans, lcm(lcm(a, d), e));
  ans = min(ans, lcm(lcm(b, c), d));
  ans = min(ans, lcm(lcm(b, c), e));
  ans = min(ans, lcm(lcm(b, d), e));
  ans = min(ans, lcm(lcm(c, d), e));

  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}