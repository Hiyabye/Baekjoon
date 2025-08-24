#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int u, n; cin >> u >> n;

  map<int, int> mp;
  vector<string> v(u+1, "");
  while (n--) {
    string s; int p; cin >> s >> p;
    mp[p]++;
    if (v[p].empty()) v[p] = s;
  }

  int cnt = 0;
  while (++cnt) {
    for (auto &[a, b] : mp) {
      if (b != cnt) continue;
      cout << v[a] << " " << a;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}