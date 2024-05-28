#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

bool check(int m, const vector<int> &a, const vector<int> &b) {
  int sum = 0;
  for (int i=0; i<m; i++) sum += abs(a[i] - b[i]);
  return sum > 2000;
}

bool solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  for (int i=1; i<n; i++) {
    if (check(m, v[0], v[i])) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}