#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool dup(const string &s) {
  vector<bool> v(26, false);
  for (char c : s) {
    if (v[c - 'A']) return true;
    v[c - 'A'] = true;
  }
  return false;
}

bool in(int m, const string &s) {
  for (char c : s) {
    if (c - 'A' >= m) return false;
  }
  return true;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (dup(v[i])) continue;
    if (in(m, v[i])) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}