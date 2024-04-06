#include <iostream>
using namespace std;

void solve(void) {
  int m, n; cin >> m >> n;
  for (int i=0; i<n; i++) {
    int u, v; cin >> u >> v;
  }

  cout << (n ? m-1 : 0) << ".000";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}