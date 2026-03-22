#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline vector<int> row(int n, int m, const vector<vector<char>> &v, int idx) {
  vector<int> r;
  int cnt = 0;
  for (int i=0; i<m; i++) {
    if (v[idx][i] == '#') cnt++;
    else {
      if (cnt > 0) r.push_back(cnt);
      cnt = 0;
    }
  }
  if (cnt > 0) r.push_back(cnt);
  return r;
}

inline vector<int> col(int n, int m, const vector<vector<char>> &v, int idx) {
  vector<int> c;
  int cnt = 0;
  for (int i=0; i<n; i++) {
    if (v[i][idx] == '#') cnt++;
    else {
      if (cnt > 0) c.push_back(cnt);
      cnt = 0;
    }
  }
  if (cnt > 0) c.push_back(cnt);
  return c;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  for (int i=0; i<n; i++) {
    vector<int> r = row(n, m, v, i);
    cout << r.size();
    for (int x : r) cout << " " << x;
    cout << "\n";
  }
  cout << "\n";

  for (int i=0; i<m; i++) {
    vector<int> c = col(n, m, v, i);
    cout << c.size();
    for (int x : c) cout << " " << x;
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}