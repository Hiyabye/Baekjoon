#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int m; cin >> m;
  vector<int> x(m);
  for (int i=0; i<m; i++) cin >> x[i];

  int ans = max(x[0], n-x[m-1]);
  for (int i=1; i<m; i++) {
    ans = max(ans, (x[i]-x[i-1]+1)/2);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}