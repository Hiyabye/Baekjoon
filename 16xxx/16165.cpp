#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  unordered_map<string, set<string>> a;
  unordered_map<string, string> b;
  while (n--) {
    string s; cin >> s;
    int k; cin >> k;
    while (k--) {
      string t; cin >> t;
      a[s].insert(t);
      b[t] = s;
    }
  }

  while (m--) {
    string s; cin >> s;
    int k; cin >> k;
    if (k == 1) cout << b[s] << "\n";
    else {
      for (const auto &t : a[s]) cout << t << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}