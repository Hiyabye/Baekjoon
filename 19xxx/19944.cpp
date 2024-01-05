#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  if (m <= 2) cout << "NEWBIE!";
  else if (m <= n) cout << "OLDBIE!";
  else cout << "TLE!";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}