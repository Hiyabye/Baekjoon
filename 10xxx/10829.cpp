#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  string ans = "";
  while (n) {
    ans += (n & 1) + '0';
    n >>= 1;
  }

  reverse(ans.begin(), ans.end());
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}