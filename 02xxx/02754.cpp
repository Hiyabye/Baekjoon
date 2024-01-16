#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  float ans = 0.0;

  if (s[0] == 'A') ans += 4.0;
  else if (s[0] == 'B') ans += 3.0;
  else if (s[0] == 'C') ans += 2.0;
  else if (s[0] == 'D') ans += 1.0;

  if (s[1] == '+') ans += 0.3;
  else if (s[1] == '-') ans -= 0.3;

  cout << fixed << setprecision(1) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}