#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<string> s(n), t(m);
  for (int i=0; i<n; i++) cin >> s[i];
  for (int i=0; i<m; i++) cin >> t[i];

  int q; cin >> q;
  while (q--) {
    int y; cin >> y; y--;
    cout << s[y % n] << t[y % m] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}