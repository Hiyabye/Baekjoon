#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(int n, const vector<int> &v, int l) {
  int ret = 0;
  vector<int> lis;
  for (int i=l; i<n; i++) {
    auto it = lower_bound(lis.begin(), lis.end(), v[i]);
    if (it == lis.end()) {
      lis.push_back(v[i]);
    } else {
      *it = v[i];
    }
    ret += lis.size();
  }
  return ret;
}

void solve(int idx) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans += calc(n, v, i);
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}