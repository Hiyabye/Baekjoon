#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;

  vector<pair<int, int>> v(k);
  for (int i=0; i<k; i++) {
    int f, d; cin >> f >> d;
    v[i].first = f + m - d;
    v[i].second = i+1;
  }

  int best = 1e9, ans = 0;
  for (int i=0; i<k; i++) {
    if (v[i].first < best) {
      best = v[i].first;
      ans = v[i].second;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}