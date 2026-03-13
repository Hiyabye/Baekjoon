#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <tuple>
#include <unordered_map>
using namespace std;
using ll = long long;

inline ll conv(const string &s) {
  string ret = "";
  bool dot = false;
  int cnt = 0;

  for (char c : s) {
    if (isdigit(c)) {
      ret += c;
      if (dot) cnt++;
    } else if (c == '.') {
      dot = true;
    }
  }
  while (cnt < 2) {
    ret += '0';
    cnt++;
  }
  return stoll(ret);
}

inline ll calc(ll x, ll y) {
  return (x * y + 5000) / 10000;
}

void solve(void) {
  int n, m; cin >> n >> m;
  unordered_map<string, tuple<ll, ll, ll>> mp;
  while (n--) {
    string s, p, g, h; cin >> s >> p >> g >> h;
    mp[s] = {conv(p), conv(g), conv(h)};
  }

  ll ans = 0;
  while (m--) {
    string s, x; cin >> s >> x;
    ll y = conv(x);
    auto [p, g, h] = mp[s];
    ans += calc(y, h) - calc(y, p) - calc(y, g);
  }

  if (ans < 0) {
    cout << "-";
    ans = -ans;
  }
  cout << ans / 100 << "." << setfill('0') << setw(2) << ans % 100 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}