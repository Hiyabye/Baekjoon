#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

inline bool check(int n, const string &s) {
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    if (s[i] == '?' || s[j] == '?') continue;
    if (s[i] == s[j]) return false;
  }
  return true;
}

bool solve(void) {
  int n, k; cin >> n >> k;
  vector<pair<int, char>> v(k);
  for (int i=0; i<k; i++) cin >> v[i].first >> v[i].second;

  string s = string(n, '?'); s[0] = v[0].second;
  for (int i=1, j=0; i<k; i++) {
    j = (j + n - v[i].first % n) % n;
    if (s[j] != '?' && s[j] != v[i].second) return false;
    s[j] = v[i].second;
  }
  rotate(s.begin(), s.begin() + s.find(v.back().second), s.end());
  if (!check(n, s)) return false;

  cout << s;
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "" : "!");
  return 0;
}