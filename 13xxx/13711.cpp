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

  vector<int> v(n);
  for (int i=0; i<n; i++) {
    v[i] = mp[b[i]];
  }

  vector<int> lis, idx(n);
  for (int i=0; i<n; i++) {
    auto it = lower_bound(lis.begin(), lis.end(), v[i]);
    if (it == lis.end()) {
      lis.push_back(v[i]);
      idx[i] = lis.size();
    } else {
      *it = v[i];
      idx[i] = distance(lis.begin(), it) + 1;
    }
  }
  cout << lis.size() << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}