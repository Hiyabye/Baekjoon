#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> y(n);
  for (int i=0; i<n; i++) cin >> y[i];

  vector<vector<long long>> ans;
  long long a[4] = {0, 0, 0, 0};
  for (int i=0; i<n; i++) {
    if (y[i] == a[i % 4]) continue;
    long long v = y[i] - a[i % 4];
    if (v > 0) ans.push_back({i+1, v, 3});
    else ans.push_back({i+1, -v, 1});
    a[i % 4] += v; a[(i+2) % 4] -= v;
  }

  cout << ans.size() << "\n";
  for (const vector<long long> &v : ans) {
    for (int i=0; i<3; i++) cout << v[i] << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}