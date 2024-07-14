#include <iostream>
#include <string>
using namespace std;

int solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int t = 0;
  bool rail = true, err = false;
  for (char c : s) {
    if (c == 'W') {
      if (++t == 2) {
        return err ? 6 : (rail ? 5 : 1);
      }
    } else {
      rail = !rail;
      if (t == 1) err = true;
    }
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}