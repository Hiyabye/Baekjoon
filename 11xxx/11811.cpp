#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> m(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> m[i][j];

  for (int i=0; i<n; i++) {
    int x = m[i][0];
    for (int j=1; j<n; j++) x |= m[i][j];
    cout << x << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}