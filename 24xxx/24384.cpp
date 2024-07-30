#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int k; cin >> k;

  string ans = "";
  for (long long x=1; ans.length()<k; x++) {
    ans += to_string(x * x * x);
  }
  cout << ans[--k];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}