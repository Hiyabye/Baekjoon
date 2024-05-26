#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  long long a, n; cin >> a >> n;

  string ans;
  while (a) {
    if (a % n < 10) ans += '0' + a % n;
    else ans += 'a' + a % n - 10;
    a /= n;
  }
  return ans == string(ans.rbegin(), ans.rend());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}