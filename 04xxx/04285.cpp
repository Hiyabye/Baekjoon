#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int k; cin >> k;
  if (k == 0) return false;
  int m; cin >> m;
  vector<string> v(k);
  for (int i=0; i<k; i++) cin >> v[i];

  bool ans = true;
  while (m--) {
    int c, r; cin >> c >> r;
    while (c--) {
      string s; cin >> s;
      if (find(v.begin(), v.end(), s) != v.end()) r--;
    }
    if (r > 0) ans = false;
  }
  cout << (ans ? "yes" : "no") << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}