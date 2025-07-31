#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool cmp(const string &a, const string &b) {
  if (a.length() != b.length()) return a.length() < b.length();
  return a < b;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<string>> v(n);

  int x; string s; cin >> x >> s; x--;
  while (s != "0") {
    if (v[x].size() < m) v[x].push_back(s);
    cin >> x >> s; x--;
  }

  for (int i=0; i<n; i++) {
    sort(v[i].begin(), v[i].end(), cmp);
  }

  for (int i=0; i<n; i+=2) for (const string &t : v[i]) {
    cout << i+1 << " " << t << "\n";
  }
  for (int i=1; i<n; i+=2) for (const string &t : v[i]) {
    cout << i+1 << " " << t << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}