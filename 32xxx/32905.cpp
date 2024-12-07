#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  for (int i=0; i<n; i++) {
    int cnt = 0;
    for (int j=0; j<m; j++) {
      if (v[i][j] == 'A') cnt++;
    }
    if (cnt != 1) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}