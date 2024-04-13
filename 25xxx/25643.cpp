#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check(int m, const string &a, const string &b) {
  if (a == b) return true;
  for (int i=1; i<m; i++) {
    if (a.substr(0, i) == b.substr(m-i, i)) return true;
    if (a.substr(m-i, i) == b.substr(0, i)) return true;
  }
  return false;
}

bool solve(void) {
  int n, m; cin >> n >> m;
  vector<string> s(n);
  for (int i=0; i<n; i++) cin >> s[i];

  for (int i=1; i<n; i++) {
    if (!check(m, s[i], s[i-1])) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}