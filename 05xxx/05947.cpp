#include <iostream>
#include <vector>
using namespace std;

bool check(int idx, int nq, const vector<int> &v, const vector<vector<int>> &r) {
  for (int i=0; i<nq; i++) {
    if (v[i] == 0) continue;
    if (v[i] != r[idx][i]) return false;
  }
  return true;
}

void solve(void) {
  int n, nq, p; cin >> n >> nq >> p;
  vector<vector<int>> r(n, vector<int>(nq));
  for (int i=0; i<n; i++) for (int j=0; j<nq; j++) cin >> r[i][j];
  vector<int> v(nq, 0);
  while (p--) {
    int q, a; cin >> q >> a; q--;
    v[q] = a;
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (check(i, nq, v, r)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}