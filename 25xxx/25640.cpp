#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a; cin >> a;
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    string s; cin >> s;
    if (s == a) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}