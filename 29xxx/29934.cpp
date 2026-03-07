#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_set<string> us;
  while (n--) {
    string s; cin >> s;
    us.insert(s);
  }
  int m; cin >> m;

  int ans = 0;
  while (m--) {
    string s; cin >> s;
    if (us.find(s) != us.end()) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}