#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<string, int> mp;

  int ans = 0;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    if (mp[s] > i-mp[s]) ans++;
    mp[s]++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}