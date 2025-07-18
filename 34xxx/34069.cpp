#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];

  if (n % 2 == 0) {
    cout << "Yes\n";
    for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
        cout << (i & 1 ? a[i-1][j] : a[i+1][j]) << " ";
      }
      cout << "\n";
    }
  } else if (m % 2 == 0) {
    cout << "Yes\n";
    for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
        cout << (j & 1 ? a[i][j-1] : a[i][j+1]) << " ";
      }
      cout << "\n";
    }
  } else {
    cout << "No";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}