#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int cur = 1, delta = 1;
  while (n--) {
    string s; int x; cin >> s >> x;

    bool a = (s == "HOURGLASS");
    bool b = (cur == x);

    cout << cur << " " << (!a && b ? "YES" : "NO") << "\n";

    if (a && !b) delta = -delta;
    cur = (cur + delta + 11) % 12 + 1;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}