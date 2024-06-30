#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n = 0; string s;
  while (s != "ArrayIndexOutOfBoundsException") {
    cout << "? 1 " << ++n + 1 << endl;
    cin >> s;
  }

  int ans = 0;
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) {
      cout << "? " << i << " " << j << endl;
      int x; cin >> x;
      ans = max(ans, x);
    }
  }
  cout << "! " << ans << endl;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}