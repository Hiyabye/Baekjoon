#include <iostream>
using namespace std;

void solve(void) {
  int ans = 0, n;
  
  while (cin >> n) ans += n;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}