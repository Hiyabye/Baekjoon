#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> d(n);
  for (int i=0; i<n; i++) cin >> d[i];

  int ans = 0, cur = 0, idx = 0;
  vector<int> v;
  while (idx < n) {
    if (cur++ == d[idx]) v.push_back(0), idx++;
    for (int i=0; i<v.size(); i++) v[i]++;
    if (accumulate(v.begin(), v.end(), 0) >= 20) v.clear(), ans++;
  }
  if (!v.empty()) ans++;
  
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}