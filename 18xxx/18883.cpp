#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  for (int i=0; i<n; i++) {
    for (int j=1; j<=m; j++) {
      cout << i*m+j;
      if (j < m) cout << " ";
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