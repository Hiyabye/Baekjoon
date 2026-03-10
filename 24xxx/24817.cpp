#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n, p, m; cin >> n >> p >> m;
  while (n--) { string s; cin >> s; }

  bool flag = false;
  unordered_map<string, int> mp;
  while (m--) {
    string s; int x; cin >> s >> x;
    if (mp[s] >= p) continue;
    mp[s] += x;
    if (mp[s] >= p) {
      flag = true;
      cout << s << " wins!\n";
    }
  }
  if (!flag) cout << "No winner!";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}