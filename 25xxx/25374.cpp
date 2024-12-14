#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());

  vector<int> ans(9, 0), cnt = {4, 7, 12, 17, 20, 17, 12, 7, 4};
  for (int i=0, idx=0; i<n; i++) {
    if (!cnt[idx]) {
      int nidx = idx + 1;
      while (!cnt[nidx]) nidx++;
      if (a[i] != a[i-1]) idx = nidx;
      else cnt[idx]++, cnt[nidx]--;
    }
    ans[idx]++; cnt[idx]--;
  }

  for (int i=0; i<9; i++) {
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}