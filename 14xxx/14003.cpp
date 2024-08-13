#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  vector<int> lis, idx(n);
  for (int i=0; i<n; i++) {
    auto it = lower_bound(lis.begin(), lis.end(), a[i]);
    if (it == lis.end()) {
      lis.push_back(a[i]);
      idx[i] = lis.size();
    } else {
      *it = a[i];
      idx[i] = distance(lis.begin(), it) + 1;
    }
  }

  vector<int> ans;
  for (int i=n-1; i>=0; i--) {
    if (idx[i] == lis.size()) {
      ans.push_back(a[i]);
      lis.pop_back();
    }
  }

  cout << ans.size() << "\n";
  for (int i=ans.size()-1; i>=0; i--) {
    cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}