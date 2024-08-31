#include <algorithm>
#include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) {
    int x, y; cin >> x >> y;
    v[i] = {max(abs(x), abs(y)), i+1};
  }
  sort(v.begin(), v.end());

  for (int i=0; i<n; i++) {
    if (v[i].first < i+1) {
      cout << -1;
      return;
    }
  }

  for (int i=0; i<n; i++) {
    cout << v[i].second << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}