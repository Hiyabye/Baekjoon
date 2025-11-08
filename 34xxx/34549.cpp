#include <iostream>
using namespace std;

void solve(void) {
  int m; cin >> m;

  for (int i=1; i<=m; i++) cout << i << " ";
  for (int i=m; i>=1; i--) cout << i << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}