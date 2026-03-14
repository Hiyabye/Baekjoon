#include <cmath>
#include <iostream>
using namespace std;

inline bool check(int n) {
  int s = sqrt(n);
  return s * s == n;
}

void solve(void) {
  int s; cin >> s;

  int ans = 0;
  for (int a=1; a*a<=2*s; a++) {
    if ((2 * s) % a) continue;
    int b = (2 * s) / a;
    if (check(a * a + b * b)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}