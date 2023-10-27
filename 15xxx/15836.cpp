#include <iostream>
#include <vector>
using namespace std;

bool solve(int idx) {
  int m, n, p, q; cin >> m >> n >> p >> q;
  if (m == 0 && n == 0 && p == 0 && q == 0) return false;

  vector<vector<int> > a(m, vector<int>(n)), b(p, vector<int>(q));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> a[i][j];
  for (int i=0; i<p; i++) for (int j=0; j<q; j++) cin >> b[i][j];

  cout << "Case #" << idx << ":\n";
  if (n != p) {
    cout << "undefined\n";
    return true;
  }

  vector<vector<int> > c(m, vector<int>(q, 0));
  for (int i=0; i<m; i++) {
    for (int j=0; j<q; j++) {
      for (int k=0; k<n; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  for (int i=0; i<m; i++) {
    cout << "| ";
    for (int j=0; j<q; j++) {
      cout << c[i][j] << " ";
    }
    cout << "|\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int idx = 1;
  while (solve(idx++));
  return 0;
}