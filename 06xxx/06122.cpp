#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n, l; cin >> n >> l;

  vector<int> s(n+1, 0), t(n+1, 0);
  while (l--) {
    int c, h, m; string k; cin >> c >> k >> h >> m;
    if (k == "START") {
      s[c] = h * 60 + m;
    } else if ("STOP") {
      t[c] += h * 60 + m - s[c];
    }
  }

  for (int i=1; i<=n; i++) {
    cout << t[i] / 60 << " " << t[i] % 60 << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}