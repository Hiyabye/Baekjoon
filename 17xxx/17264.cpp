#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

bool solve(void) {
  int n, p; cin >> n >> p;
  int w, l, g; cin >> w >> l >> g;
  unordered_map<string, bool> mp;
  while (p--) {
    string s; char c; cin >> s >> c;
    mp[s] = c == 'W';
  }
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (mp.find(v[i]) != mp.end() && mp[v[i]]) ans += w;
    else ans -= l;
    ans = max(0, ans);
    if (ans >= g) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "I AM NOT IRONMAN!!" : "I AM IRONMAN!!");
  return 0;
}