#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = 0, b = 0;
  for (int i=0; i<n; i++) {
    char x, y; cin >> x >> y;
    if ((x == 'R' && y == 'S') || (x == 'S' && y == 'P') || (x == 'P' && y == 'R')) a++;
    else if ((x == 'R' && y == 'P') || (x == 'S' && y == 'R') || (x == 'P' && y == 'S')) b++;
  }

  if (a > b) cout << "Player 1\n";
  else if (a < b) cout << "Player 2\n";
  else cout << "TIE\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}