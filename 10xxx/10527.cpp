#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<string, int> a, b;
  for (int i=0; i<n; i++) {
    string s; cin >> s; a[s]++;
  }
  for (int i=0; i<n; i++) {
    string s; cin >> s; b[s]++;
  }

  int ans = 0;
  for (auto &p : a) {
    ans += min(p.second, b[p.first]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}