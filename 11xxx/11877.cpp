#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  long long n, x; cin >> n >> x;
  if (x > (n-2)*(n-1)/2) {
    cout << -1;
    return;
  }

  vector<int> ans(1, n); ans.reserve(n);
  vector<bool> v(n+1, false); v[n] = true;

  for (long long t=1; t<=n-2; t++) {
    if (x >= n-t-1) {
      ans.emplace_back(t); v[t] = true;
      x -= n-t-1;
    } else {
      ans.emplace_back(n-x-1); v[n-x-1] = true;
      break;
    }
  }

  for (int i=0; i<ans.size(); i++) {
    cout << ans[i] << " ";
  }
  for (int i=n; i>=1; i--) {
    if (!v[i]) cout << i << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}