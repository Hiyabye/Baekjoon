#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  vector<bool> v(n, false);
  for (int i=0; i<n; i++) {
    if (s[i] == '0') continue;
    v[i] = true;
    if (i+1 < n) v[i+1] = true;
    if (i+2 < n) v[i+2] = true;
  }
  cout << count(v.begin(), v.end(), true);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}