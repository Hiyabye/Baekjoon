#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0, cur = v.back();
  for (int i=n-1; i>=0; i--) {
    if (v[i] < cur-1) cur = v[i];
    else ans += v[i] - cur;
    cur--;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}