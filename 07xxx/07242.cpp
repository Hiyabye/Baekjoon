#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int mx = -1, mn = 1e9;
  while (n--) {
    int h1, m1, h2, m2; cin >> h1 >> m1 >> h2 >> m2;
    mx = max(mx, 60 * h1 + m1);
    mn = min(mn, 60 * h2 + m2);
  }

  if (mx < mn) cout << "TAIP\n" << mx / 60 << " " << mx % 60 << " " << mn / 60 << " " << mn % 60;
  else cout << "NE";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}