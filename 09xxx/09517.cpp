#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int k; cin >> k;
  int n; cin >> n;
  vector<pair<int, char>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;

  int cur = k, time = 0;
  for (int i=0; i<n; i++) {
    time += v[i].first;
    if (time >= 210) break;
    if (v[i].second == 'T') cur = (cur % 8) + 1;
  }
  cout << cur;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}