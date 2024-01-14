#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a, b; cin >> a >> b;

  bool sign = (a[0] == '-') ^ (b[0] == '-');
  a = (a[0] == '-') ? a.substr(1, 1) + a.substr(3) : a.substr(0, 1) + a.substr(2);
  b = (b[0] == '-') ? b.substr(1, 1) + b.substr(3) : b.substr(0, 1) + b.substr(2);

  string ans = to_string(stoull(a) * stoull(b));
  while (ans.size() < 19) ans = "0" + ans;
  ans.insert(ans.size() - 18, ".");
  if (sign) ans = "-" + ans;
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}