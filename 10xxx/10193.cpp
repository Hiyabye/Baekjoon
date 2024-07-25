#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a, b; cin >> a >> b;

  int ans = 0;
  for (int i=0; i<a.length(); i++) {
    ans += a[i] - b[i];
  }

  cout << "Swapping letters to make " << a << " look like " << b << " ";
  if (ans > 0)      cout << "earned " << ans << " coins.";
  else if (ans < 0) cout << "cost " << -ans << " coins.";
  else              cout << "was FREE.";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}