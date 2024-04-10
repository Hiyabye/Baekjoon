#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  int ans = 0;
  while (n--) {
    vector<int> x(m);
    for (int i=0; i<m; i++) cin >> x[i];
    if (find(x.begin(), x.end(), 0) == x.end()) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}