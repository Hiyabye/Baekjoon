#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int m; cin >> m;
  vector<int> f(m+1);
  for (int i=1; i<=m; i++) {
    int x; cin >> x;
    f[i] = x;
  }

  vector<vector<int>> st(m+1, vector<int>(21, 0));
  for (int i=1; i<=m; i++) st[i][0] = f[i];
  for (int j=1; j<=20; j++) {
    for (int i=1; i<=m; i++) {
      st[i][j] = st[st[i][j-1]][j-1];
    }
  }

  int q; cin >> q;
  while (q--) {
    int n, x; cin >> n >> x;
    for (int i=0; i<=20; i++) {
      if (n & (1<<i)) x = st[x][i];
    }
    cout << x << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}