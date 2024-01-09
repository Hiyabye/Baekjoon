#include <iostream>
using namespace std;

void solve(void) {
  int d, h, m; cin >> d >> h >> m;

  int ans = (m-11) + (h-11)*60 + (d-11)*1440;
  cout << (ans < 0 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}