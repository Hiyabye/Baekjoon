#include <iostream>
using namespace std;

bool cmp(double &mx, double val) {
  if (mx < val) {
    mx = val;
    return true;
  }
  return false;
}

void solve(void) {
  double a, b; cin >> a >> b;
  double c, d; cin >> c >> d;

  int ans = 0;
  double mx = a/c + b/d;
  if (cmp(mx, c/d + a/b)) ans = 1;
  if (cmp(mx, d/b + c/a)) ans = 2;
  if (cmp(mx, b/a + d/c)) ans = 3;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}