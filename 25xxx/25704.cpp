#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int p; cin >> p;

  int ans;
  if (n >= 20) ans = min(p*3/4, p-2000);
  else if (n >= 15) ans = min(p-2000, p*9/10);
  else if (n >= 10) ans = min(p*9/10, p-500);
  else if (n >= 5) ans = p-500;
  else ans = p;
  cout << (ans < 0 ? 0 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}