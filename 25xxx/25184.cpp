#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> ans(n);
  for (int i=1; i<=n; i++) {
    if (i <= n/2) ans[2*i-1] = i;
    else ans[2*(i-n/2-1)] = i;
  }

  for (int i=0; i<n; i++) {
    cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}