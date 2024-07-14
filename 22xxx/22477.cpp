#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_set<string> u;
  while (n--) {
    string s; cin >> s;
    u.insert(s);
  }
  int m; cin >> m;

  bool flag = true;
  while (m--) {
    string t; cin >> t;
    if (u.find(t) == u.end()) {
      cout << "Unknown";
    } else {
      cout << (flag ? "Opened" : "Closed") << " by";
      flag = !flag;
    }
    cout << " " << t << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}