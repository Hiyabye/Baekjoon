#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

struct Submatrix {
  int r, c;
  vector<vector<int>> v;
};

bool cmp(const Submatrix &a, const Submatrix &b) {
  set<int, greater<int>> sa, sb;
  for (int i=0; i<a.v.size(); i++) for (int j=0; j<a.v[i].size(); j++) sa.insert(a.v[i][j]);
  for (int i=0; i<b.v.size(); i++) for (int j=0; j<b.v[i].size(); j++) sb.insert(b.v[i][j]);
  if (sa.size() != sb.size()) return sa.size() < sb.size();
  for (auto ita=sa.begin(), itb=sb.begin(); ita!=sa.end(); ita++, itb++) {
    if (*ita != *itb) return *ita > *itb;
  }
  if (a.r != b.r) return a.r < b.r;
  return a.c < b.c;
}

void solve(int n, int m) {
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  vector<Submatrix> ans;
  for (int i=0; i<=n-m; i++) for (int j=0; j<=n-m; j++) {
    vector<vector<int>> tmp(m, vector<int>(m));
    for (int x=0; x<m; x++) for (int y=0; y<m; y++) tmp[x][y] = v[i+x][j+y];
    ans.push_back({i+1, j+1, tmp});
  }
  sort(ans.begin(), ans.end(), cmp);

  cout << ans[0].r << " " << ans[0].c << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  while (cin >> n >> m) solve(n, m);
  return 0;
}