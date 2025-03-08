#include <iostream>
#include <vector>
using namespace std;

inline void rotate(vector<vector<int>> &a, int n, int m, int r, int k) {
  if (n == 0 || m == 0) return;
  vector<int> tmp;
  for (int i=k; i<k+m; i++) tmp.push_back(a[k][i]);
  for (int i=k+1; i<k+n; i++) tmp.push_back(a[i][k+m-1]);
  for (int i=k+m-2; i>=k; i--) tmp.push_back(a[k+n-1][i]);
  for (int i=k+n-2; i>k; i--) tmp.push_back(a[i][k]);

  int idx = r;
  for (int i=k; i<k+m; i++) a[k][i] = tmp[idx++%tmp.size()];
  for (int i=k+1; i<k+n; i++) a[i][k+m-1] = tmp[idx++%tmp.size()];
  for (int i=k+m-2; i>=k; i--) a[k+n-1][i] = tmp[idx++%tmp.size()];
  for (int i=k+n-2; i>k; i--) a[i][k] = tmp[idx++%tmp.size()];
  rotate(a, n-2, m-2, r, k+1);
}

void solve(void) {
  int n, m, r; cin >> n >> m >> r;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];

  rotate(a, n, m, r, 0);

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cout << a[i][j] << " ";
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