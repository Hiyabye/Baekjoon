#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, c; cin >> n >> c;
  vector<int> v(c);
  for (int i=0; i<c; i++) cin >> v[i];

  vector<int> ans(n+1, 0); ans[0] = 1;
  for (int i=0; i<c; i++) for (int j=v[i]; j<=n; j++) {
    ans[j] += ans[j-v[i]];
  }
  cout << ans[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}