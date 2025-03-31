#include <algorithm>
#include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  if (n <= 1) {
    cout << n << " " << n;
    return;
  }

  vector<pair<int, int>> v(n+1, {0, 0});
  for (int i=1; i<=n; i++) {
    int s = sqrt(i);
    v[i] = {v[i-1].first + 1, v[i-1].second + 1};
    if (i % 3 == 0) v[i] = min(v[i], {v[i/3].first + 1, v[i/3].second + 3});
    if (s * s == i) v[i] = min(v[i], {v[s].first + 1, v[s].second + 5});
  }
  cout << v[n].first << " " << v[n].second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}