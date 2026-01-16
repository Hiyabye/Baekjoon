#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<vector<int>> v(n+1, vector<int>(4, 0));
  for (int i=1; i<=n; i++) {
    int x; cin >> x; v[i][x]++;
    for (int j=1; j<=3; j++) {
      v[i][j] += v[i-1][j];
    }
  }

  while (q--) {
    int a, b; cin >> a >> b;
    for (int j=1; j<=3; j++) {
      cout << v[b][j] - v[a-1][j] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}