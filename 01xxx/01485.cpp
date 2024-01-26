#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  vector<pair<int, int>> v(4);
  for (int i=0; i<4; i++) cin >> v[i].first >> v[i].second;

  vector<int> d;
  for (int i=0; i<3; i++) for (int j=i+1; j<4; j++) {
    int dx = v[i].first - v[j].first, dy = v[i].second - v[j].second;
    d.push_back(dx*dx + dy*dy);
  }
  sort(d.begin(), d.end());

  cout << (d[0] == d[1] && d[1] == d[2] && d[2] == d[3] && d[4] == d[5]) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}