#include <iostream>
#include <vector>
using namespace std;

bool check(const vector<char> &v, const vector<vector<int>> &a, int idx) {
  for (int i=0; i<a[0].size(); i++) {
    if (v[a[idx][i]] == 'P') return false;
  }
  return true;
}

bool solve(void) {
  int n; cin >> n;
  vector<char> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  int m, k; cin >> m >> k;
  vector<vector<int>> a(m, vector<int>(k));
  for (int i=0; i<m; i++) for (int j=0; j<k; j++) cin >> a[i][j], a[i][j]--;

  for (int i=0; i<m; i++) {
    if (check(v, a, i)) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? 'P' : 'W');
  return 0;
}