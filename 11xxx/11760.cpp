#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; string c, g; cin >> n >> c >> g;

  int r = 0, s = 0;
  for (int i=0; i<n; i++) {
    if (c[i] == g[i]) r++;
  }
  for (int i=0; i<26; i++) {
    s += min(count(c.begin(), c.end(), 'A' + i), count(g.begin(), g.end(), 'A' + i));
  }
  cout << r << " " << s - r;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}