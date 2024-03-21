#include <iostream>
using namespace std;

bool solve(void) {
  int k; cin >> k;
  if (k == 0) return false;

  int n, m; cin >> n >> m;
  while (k--) {
    int x, y; cin >> x >> y;
    if (x == n || y == m) cout << "divisa";
    else cout << (y < m ? "S" : "N") << (x < n ? "O" : "E");
    cout << "\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}