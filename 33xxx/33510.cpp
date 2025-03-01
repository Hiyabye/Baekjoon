#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string x; cin >> x;

  int ans = 0;
  for (int i=n-1; i>0; i--) {
    if (ans) ans += x[i] == '0';
    else ans = x[i] == '1';
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}