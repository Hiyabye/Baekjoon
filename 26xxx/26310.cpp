#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<string, int> mp;
  for (int i=0; i<6; i++) {
    string s; cin >> s;
    int pt, pu, rt, ru, f; cin >> pt >> pu >> rt >> ru >> f;
    mp[s] = pt * 56 + pu * 24 + rt * 14 + ru * 6 + f * 30;
  }

  int ans = 1;
  for (auto [_, v] : mp) {
    if (v > mp["Taiwan"]) ans++;
  }
  cout << n / 6 + (ans <= n % 6);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}