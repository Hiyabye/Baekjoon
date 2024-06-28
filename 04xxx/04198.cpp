#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int lis(int idx, vector<int> &v) {
  vector<int> dp;
  dp.push_back(v[idx]);
  for (int i=idx+1; i<v.size(); i++) {
    if (v[i] > dp.back()) dp.push_back(v[i]);
    else if (v[i] > dp.front()) {
      auto it = lower_bound(dp.begin(), dp.end(), v[i]);
      *it = v[i];
    }
  }
  return dp.size();
}

int lds(int idx, vector<int> &v) {
  vector<int> dp;
  dp.push_back(v[idx]);
  for (int i=idx+1; i<v.size(); i++) {
    if (v[i] < dp.back()) dp.push_back(v[i]);
    else if (v[i] < dp.front()) {
      auto it = upper_bound(dp.begin(), dp.end(), v[i], greater<int>());
      *it = v[i];
    }
  }
  return dp.size();
}

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans = max(ans, lis(i, v) + lds(i, v) - 1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}