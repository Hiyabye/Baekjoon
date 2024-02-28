#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int p; cin >> p;
  vector<int> g(p), c(p), n(p);
  for (int i=0; i<p; i++) cin >> g[i] >> c[i] >> n[i];

  vector<int> ans(4, 0);
  for (int i=0; i<p; i++) {
    if (g[i] == 1) ans[3]++;
    else if (c[i] <= 2) ans[0]++;
    else if (c[i] == 3) ans[1]++;
    else if (c[i] == 4) ans[2]++;
  }
  for (int i=0; i<4; i++) cout << ans[i] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}