#include <iostream>
#include <map>
#include <string>
using namespace std;

inline void calc(const string &s, int k, map<string, int> &mp) {
  int n = s.length();
  for (int i=0; i<(1<<n); i++) {
    if (__builtin_popcount(i) != k) continue;
    string t = "";
    for (int j=0; j<n; j++) {
      if (i & (1<<j)) t += s[j];
    }
    mp[t]++;
  }
}

inline bool check(const map<string, int> &mp) {
  for (auto [k, v] : mp) {
    if (v > 1) return true;
  }
  return false;
}

void solve(void) {
  string x; cin >> x;
  string y; cin >> y;
  string z; cin >> z;
  int k; cin >> k;

  map<string, int> mp;
  calc(x, k, mp); calc(y, k, mp); calc(z, k, mp);
  if (!check(mp)) {
    cout << -1;
    return;
  }

  for (auto [k, v] : mp) {
    if (v > 1) cout << k << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}