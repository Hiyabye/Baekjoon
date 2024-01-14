#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;

  unordered_map<long long, int> m;
  int jinju = 0, ans = 0;
  while (n--) {
    string d; long long c; cin >> d >> c;
    if (d == "jinju") jinju = c;
    else if (c > 1000) ans++;
    else m[c]++;
  }

  for (auto [k, v] : m) {
    if (k > jinju) ans += v;
  }
  cout << jinju << "\n" << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}