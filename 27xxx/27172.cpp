#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n);
  for (int i=0; i<n; i++) cin >> x[i];

  vector<bool> exist(1000001, false);
  for (int i=0; i<n; i++) exist[x[i]] = true;

  vector<int> ans(1000001, 0);
  for (int i=0; i<n; i++) {
    for (int j=2*x[i]; j<=1000000; j+=x[i]) {
      if (!exist[j]) continue;
      ans[x[i]]++;
      ans[j]--;
    }
  }

  for (int i=0; i<n; i++) {
    cout << ans[x[i]] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}