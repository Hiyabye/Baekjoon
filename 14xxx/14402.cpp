#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int q; cin >> q;
  unordered_map<string, int> mp;
  while (q--) {
    string a, b; cin >> a >> b;
    if (b == "+") mp[a]++;
    else if (mp[a] == 0) mp[""]++;
    else mp[a]--;
  }

  for (auto &[k, v] : mp) {
    if (k == "") continue;
    mp[""] += v;
  }
  cout << mp[""];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}