#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline char calc(const vector<vector<char>> &v, int n, int idx) {
  vector<int> cnt(26, 0);
  for (int i=0; i<n; i++) {
    cnt[v[i][idx]-'a']++;
  }

  int mx = *max_element(cnt.begin(), cnt.end());
  for (int i=0; i<26; i++) {
    if (cnt[i] == mx) return i + 'a';
  }
  return 0;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  for (int i=0; i<m; i++) {
    cout << calc(v, n, i);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}