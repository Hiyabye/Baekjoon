#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n = s.length();

  vector<bool> v(n, false);
  for (int i=0; i<n; i++) {
    if (s[i] == '-') v[i] = true;
  }
  for (int i=0; i<n; i++) {
    if (s[i] == 'B') {
      if (i > 0) v[i-1] = false;
      if (i > 1) v[i-2] = false;
    } else if (s[i] == 'S') {
      if (i > 0) v[i-1] = false;
      if (i < n-1) v[i+1] = false;
    }
  }
  cout << count(v.begin(), v.end(), true) << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}