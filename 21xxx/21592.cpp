#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool check(int n, const vector<string> &v, const string &s) {
  for (int i=1; i<n; i++) {
    if (v[i].find(s) == string::npos) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  if (n == 1) {
    cout << v[0].length();
    return;
  }

  int ans = 0;
  for (int i=0; i<v[0].length(); i++) for (int j=i; j<v[0].length(); j++) {
    if (!check(n, v, v[0].substr(i, j-i+1))) continue;
    ans = max(ans, j-i+1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}