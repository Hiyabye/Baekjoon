#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

inline int calc(int a, int b, int c, int d) {
  return min({1000 * a + 100 * b + 10 * c + d,
              1000 * b + 100 * c + 10 * d + a,
              1000 * c + 100 * d + 10 * a + b,
              1000 * d + 100 * a + 10 * b + c});
}

void solve(void) {
  int a, b, c, d; cin >> a >> b >> c >> d;

  set<int> s;
  for (int i=1; i<=9; i++) for (int j=1; j<=9; j++) for (int k=1; k<=9; k++) for (int l=1; l<=9; l++) {
    s.insert(calc(i, j, k, l));
  }

  int ans = 1;
  for (auto it : s) {
    if (it == calc(a, b, c, d)) break;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}