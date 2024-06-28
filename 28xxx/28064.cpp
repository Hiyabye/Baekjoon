#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check(string s, string t) {
  for (int i=1; i<=min(s.size(), t.size()); i++) {
    if (s.substr(0, i) == t.substr(t.size()-i)) return true;
    if (t.substr(0, i) == s.substr(s.size()-i)) return true;
  }
  return false;
}

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      if (check(v[i], v[j])) ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}