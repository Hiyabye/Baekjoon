#include <iostream>
using namespace std;

void solve(void) {
  int x, y; cin >> x >> y;

  // time
  cout << ((x <= 23 && y <= 59) ? "Yes " : "No ");

  // date
  if (x == 0 || x > 12 || y == 0 || y > 31) cout << "No\n";
  else if (x == 2 && y > 29) cout << "No\n";
  else if ((x == 4 || x == 6 || x == 9 || x == 11) && y > 30) cout << "No\n";
  else cout << "Yes\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}