#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m)), b(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> b[i][j];

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cout << a[i][j] + b[i][j] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}