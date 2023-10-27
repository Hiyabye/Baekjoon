#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > matmul(int n, int m, vector<vector<int> > a, vector<vector<int> > b) {
  vector<vector<int> > ret(n, vector<int>(n, 0));
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      for (int k=0; k<n; k++) {
        ret[i][j] = (ret[i][j] + a[i][k] * b[k][j]) % m;
      }
    }
  }
  return ret;
}

vector<vector<int> > matexp(int n, int m, int p, vector<vector<int> > a) {
  if (p == 1) return a;
  vector<vector<int> > half = matexp(n, m, p/2, a);
  if (p & 1) return matmul(n, m, matmul(n, m, half, half), a);
  else return matmul(n, m, half, half);
}

bool solve(void) {
  int n, m, p; cin >> n >> m >> p;
  if (n == 0 && m == 0 && p == 0) return false;
  vector<vector<int> > v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  vector<vector<int> > ans = matexp(n, m, p, v);
  for (int i=0; i<n; i++) {
    cout << ans[i][0];
    for (int j=1; j<n; j++) cout << " " << ans[i][j];
    cout << "\n";
  }
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  while (solve());
  return 0;
}