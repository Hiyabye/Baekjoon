#include <iostream>
using namespace std;

int f(int n, int m, int i) {
  int ret = 0;
  for (int x=0; x<=n; x++) {
    for (int y=0; y<=m; y++) {
      if (x + y == i) ret++;
      else if (x + y > i) break;
    }
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;

  int ans = 0;
  for (int i=0; i<=n+m; i++) ans += f(n, m, i);
  cout << ans; 
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}