#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  if (n > m) swap(n, m);

  for (int i=n+1; i<=m+1; i++) {
    cout << i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}