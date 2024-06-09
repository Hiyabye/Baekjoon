#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  int ans = 1, cur = 0;
  for (int i=0; i<b.length(); i++) {
    while (a[cur] != b[i]) {
      cur++;
      if (cur == a.length()) cur = 0, ans++;
    }
    cur++;
    if (cur == a.length()) cur = 0, ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}