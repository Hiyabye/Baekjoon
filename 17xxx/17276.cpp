#include <iostream>
#include <vector>
using namespace std;

void rotate(int n, vector<vector<int>> &a) {
  vector<vector<int>> b = a;
  for (int i=0; i<(n-1)/2; i++) {
    b[i][(n-1)/2] = a[i][i];
    b[(n-1)/2][n-i-1] = a[i][n-i-1];
    b[n-i-1][(n-1)/2] = a[n-i-1][n-i-1];
    b[(n-1)/2][i] = a[n-i-1][i];
    b[i][i] = a[(n-1)/2][i];
    b[i][n-i-1] = a[i][(n-1)/2];
    b[n-i-1][n-i-1] = a[(n-1)/2][n-i-1];
    b[n-i-1][i] = a[n-i-1][(n-1)/2];
  }
  a = b;
}

void solve(void) {
  int n, d; cin >> n >> d; d += 360;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  while (d > 0) {
    rotate(n, v);
    d -= 45;
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) cout << v[i][j] << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}