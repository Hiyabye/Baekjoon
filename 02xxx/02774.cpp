#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int x;
  cin >> x;

  vector<bool> v(10, false);
  while (x) {
    v[x%10] = true;
    x /= 10;
  }

  int ans = 0;
  for (int i=0; i<10; i++) {
    if (v[i]) ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}