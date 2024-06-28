#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<bool> > v(n, vector<bool>(n, false));

  while (m--) {
    int a, b; cin >> a >> b;
    a--; b--;
    v[a][b] = v[b][a] = true;
  }

  for (int i=0; i<n; i++) {
    int cnt = 0;
    for (int j=0; j<n; j++) {
      if (v[i][j]) cnt++;
    }
    cout << cnt << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}