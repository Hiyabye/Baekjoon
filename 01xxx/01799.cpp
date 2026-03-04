#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

inline int backtrack(const vector<pair<int, int>> &p, vector<bool> &row, vector<bool> &col, int idx) {
  if (idx == p.size()) return 0;
  int r = p[idx].first, c = p[idx].second;
  int ret = backtrack(p, row, col, idx+1);
  if (!row[r] && !col[c]) {
    row[r] = col[c] = true;
    ret = max(ret, 1 + backtrack(p, row, col, idx+1));
    row[r] = col[c] = false;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> p1, p2;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    int x; cin >> x;
    if (x == 1) {
      if ((i+j) & 1) p1.emplace_back(i+j, i-j+n-1);
      else p2.emplace_back(i+j, i-j+n-1);
    }
  }

  vector<bool> r1(2*n-1, false), c1(2*n-1, false);
  vector<bool> r2(2*n-1, false), c2(2*n-1, false);

  cout << backtrack(p1, r1, c1, 0) + backtrack(p2, r2, c2, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}