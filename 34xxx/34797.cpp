#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

inline double calc(char c) {
  return 0.025 * ('3' - c);
}

void solve(void) {
  int n; cin >> n;

  double ans = 0.0;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    switch (s[0]) {
      case 'A': ans += 4.0 / n + calc(s[1]); break;
      case 'B': ans += 3.0 / n + calc(s[1]); break;
      case 'C': ans += 2.0 / n + calc(s[1]); break;
      case 'D': ans += 1.0 / n; break;
      case 'E': break;
    }
  }
  cout << fixed << setprecision(7) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}