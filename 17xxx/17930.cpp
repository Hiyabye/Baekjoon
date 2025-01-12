#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int l, x; cin >> l >> x;

  int ans = 0, cur = 0;
  while (x--) {
    string s; int p; cin >> s >> p;
    if (s == "leave") cur -= p;
    else if (cur + p > l) ans++;
    else cur += p;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}