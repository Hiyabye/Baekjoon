#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int m, n; cin >> m >> n;
  vector<string> a(m);
  for (int i=0; i<m; i++) cin >> a[i];

  vector<string> b(m, "");
  while (n--) {
    int u, v; cin >> u >> v; u--; v--;
    b[v] = a[u];
  }

  int idx = 0;
  for (const string &s : b) {
    if (s != "") {
      cout << s << " ";
    } else {
      while (idx < m && find(b.begin(), b.end(), a[idx]) != b.end()) idx++;
      cout << a[idx++] << " ";
    }
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}