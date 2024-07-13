#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> a(n, vector<char>(m)), b(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> b[i][j];

  int ans = 0;
  for (int i=0; i<m; i++) {
    unordered_set<char> s;
    for (int j=0; j<n; j++) s.insert(a[j][i]);
    bool flag = true;
    for (int j=0; j<n; j++) {
      if (s.find(b[j][i]) != s.end()) {
        flag = false;
        break;
      }
    }
    if (flag) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}