#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int> > v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int cnt = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cnt += v[i][j];
  bool even = (cnt & 1 || (n*m-cnt) & 1 ? false : true);

  bool check = true;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (i > 0 && v[i][j] == v[i-1][j]) check = false;
      if (j > 0 && v[i][j] == v[i][j-1]) check = false;
      if (i < n-1 && v[i][j] == v[i+1][j]) check = false;
      if (j < m-1 && v[i][j] == v[i][j+1]) check = false;
      if (!check) break;
    }
  }

  cout << (even && !check ? 1 : -1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}