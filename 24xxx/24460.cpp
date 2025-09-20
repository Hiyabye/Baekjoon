#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> v;

inline int calc(int a, int b, int c, int d) {
  vector<int> tmp = {a, b, c, d};
  sort(tmp.begin(), tmp.end());
  return tmp[1];
}

inline int rec(int n, int r, int c) {
  if (n == 2) return calc(v[r][c], v[r][c+1], v[r+1][c], v[r+1][c+1]);
  else return calc(rec(n/2, r, c), rec(n/2, r, c+n/2), rec(n/2, r+n/2, c), rec(n/2, r+n/2, c+n/2));
}

void solve(void) {
  int n; cin >> n;
  v.resize(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  cout << (n == 1 ? v[0][0] : rec(n, 0, 0));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}