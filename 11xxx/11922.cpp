#include <iostream>
using namespace std;

void solve(void) {
  int n; char b; cin >> n >> b;

  int ans = 0;
  for (int i=0; i<4*n; i++) {
    char d, s; cin >> d >> s;
    switch (d) {
      case 'A': ans += 11; break;
      case 'K': ans += 4; break;
      case 'Q': ans += 3; break;
      case 'J': ans += (s == b ? 20 : 2); break;
      case 'T': ans += 10; break;
      case '9': ans += (s == b ? 14 : 0); break;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}