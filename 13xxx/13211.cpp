#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_set<string> s;
  while (n--) {
    string t; cin >> t;
    s.insert(t);
  }
  int m; cin >> m;

  int ans = 0;
  while (m--) {
    string t; cin >> t;
    if (s.find(t) != s.end()) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}