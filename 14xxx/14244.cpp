#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  for (int i=1; i<=m; i++) cout << 0 << " " << i << "\n";
  for (int i=m; i<n-1; i++) cout << i << " " << i+1 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}