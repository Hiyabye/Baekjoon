#include <iostream>
#include <string>
using namespace std;

string solve(void) {
  int n; cin >> n;
  string a, b, c, d; cin >> a >> b >> c >> d;

  string ans = "";
  for (int i=0; i<n; i++) {
    if (a[i] != c[i]) continue;
    if (b[i] != d[i]) return "htg!";
    ans += b[i];
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}