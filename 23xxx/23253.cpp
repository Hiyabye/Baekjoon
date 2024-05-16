#include <iostream>
#include <vector>
using namespace std;

bool check(int k, const vector<int> &v) {
  for (int i=1; i<k; i++) {
    if (v[i] > v[i-1]) return false;
  }
  return true;
}

bool solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> v(m);
  for (int i=0; i<m; i++) {
    int k; cin >> k;
    v[i].resize(k);
    for (int j=0; j<k; j++) cin >> v[i][j];
  }

  for (int i=0; i<m; i++) {
    if (!check(v[i].size(), v[i])) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}