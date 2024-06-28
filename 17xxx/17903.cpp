#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int m, n; cin >> m >> n;
  vector<vector<int>> a(m, vector<int>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> a[i][j];

  cout << (m >= 8 ? "satisfactory" : "unsatisfactory");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}