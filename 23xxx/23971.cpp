#include <iostream>
using namespace std;

void solve(void) {
  int h, w, n, m; cin >> h >> w >> n >> m;

  cout << ((h+n) / (n+1)) * ((w+m) / (m+1));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}