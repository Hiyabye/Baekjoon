#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  unordered_map<int, int> mp;
  for (int i=0; i<n; i++) {
    mp[a[i]] = i;
  }

  vector<int> c(n);
  for (int i=0; i<n; i++) {
    c[mp[b[i]]] = i;
  }

  vector<int> lis, idx(n);
  for (int i=0; i<n; i++) {
    auto it = lower_bound(lis.begin(), lis.end(), c[i]);
    if (it == lis.end()) {
      lis.push_back(c[i]);
      idx[i] = lis.size();
    } else {
      *it = c[i];
      idx[i] = distance(lis.begin(), it) + 1;
    }
  }

  vector<int> ans;
  for (int i=n-1; i>=0; i--) {
    if (idx[i] == lis.size()) {
      ans.push_back(b[c[i]]);
      lis.pop_back();
    }
  }
  sort(ans.begin(), ans.end());

  cout << ans.size() << "\n";
  for (int x : ans) {
    cout << x << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}