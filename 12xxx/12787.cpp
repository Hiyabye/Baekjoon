#include <cstdint>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int m; cin >> m;

  if (m == 1) {
    string n; cin >> n;
    size_t pos = 0;
    string tok;
    uint64_t ans = 0;
    while ((pos = n.find('.')) != string::npos) {
      tok = n.substr(0, pos);
      ans = (ans << 8) + stoi(tok);
      n.erase(0, pos + 1);
    }
    ans = (ans << 8) + stoi(n);
    cout << ans << "\n";
  } else {
    uint64_t n; cin >> n;
    string ans;
    for (int i = 0; i < 8; ++i) {
      ans = to_string(n & 0xFF) + (i == 0 ? "" : ".") + ans;
      n >>= 8;
    }
    cout << ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}