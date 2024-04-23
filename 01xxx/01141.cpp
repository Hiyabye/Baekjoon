#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool prefix(const string &a, const string &b) {
  for (int i=0; i<a.length() && i<b.length(); i++) {
    if (a[i] != b[i]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  int ans = n;
  for (int i=1; i<n; i++) {
    if (prefix(v[i-1], v[i])) ans--;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}