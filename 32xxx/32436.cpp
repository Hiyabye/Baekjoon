#include <iostream>
#include <vector>
using namespace std;

inline bool check(int n, const vector<vector<int>> &k) {
  for (int i=0; i<n; i++) for (int j=1; j<n; j++) {
    if (k[i][j-1] > k[i][j] || k[j-1][i] > k[j][i]) return false;
  }
  return true;
}

inline vector<vector<int>> rotate(int n, const vector<vector<int>> &k) {
  vector<vector<int>> ret(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) ret[i][j] = k[j][n-i-1];
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> k(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> k[i][j];

  int ans = 0;
  while (!check(n, k)) k = rotate(n, k), ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}