#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> c(n);
  for (int i=0; i<n; i++) cin >> c[i];

  int ans = 1;
  for (int i=1; i<n; i++) {
    if (c[i-1] < c[i]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}