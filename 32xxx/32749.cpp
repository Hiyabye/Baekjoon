#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, t; cin >> n >> t;
  string x; cin >> x;

  string ans = x.substr(0, 1<<(n-t));
  for (int i=(1<<(n-t)); i<(1<<n); i+=(1<<(n-t))) {
    ans = max(ans, x.substr(i, 1<<(n-t)));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}