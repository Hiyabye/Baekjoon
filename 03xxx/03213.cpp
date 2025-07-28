#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = 0, b = 0, c = 0;
  while (n--) {
    string s; cin >> s;
    if (s == "1/4") a++;
    else if (s == "1/2") b++;
    else if (s == "3/4") c++;
  }

  int ans = 0;
  while (c--) {
    if (a) a--;
    ans++;
  }
  while (b--) {
    if (a >= 2) a -= 2;
    else if (a == 1) a = 0;
    else if (b >= 1) b--;
    ans++;
  }
  ans += (a + 3) / 4;

  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}