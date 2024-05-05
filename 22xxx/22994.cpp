#include <iostream>
#include <vector>
using namespace std;

bool check(int ni, int mj, const vector<vector<char>> &v, int n, int m) {
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) for (int k=0; k<ni/n; k++) for (int l=0; l<mj/m; l++) {
    if (v[i*ni/n+k][j*mj/m+l] != v[i*ni/n][j*mj/m]) return false;
  }
  return true;
}

void solve(void) {
  int ni, mj; cin >> ni >> mj;
  vector<vector<char>> v(ni, vector<char>(mj));
  for (int i=0; i<ni; i++) for (int j=0; j<mj; j++) cin >> v[i][j];

  pair<int, int> ans = {1000, 1000};
  for (int i=1; i<=ni; i++) for (int j=1; j<=mj; j++) {
    if (ni % i || mj % j) continue;
    if (check(ni, mj, v, i, j) && i * j < ans.first * ans.second) ans = {i, j};
  }

  cout << ans.first << " " << ans.second << "\n";
  for (int i=0; i<ans.first; i++) {
    for (int j=0; j<ans.second; j++) {
      cout << v[i*ni/ans.first][j*mj/ans.second];
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