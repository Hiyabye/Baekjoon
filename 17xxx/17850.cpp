#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int l, h, p, e, n; cin >> l >> h >> p >> e >> n;

  vector<pair<int, int>> v(4, {0, 0});
  while (n--) {
    string cat; int i, r, s; char c;
    cin >> cat >> i >> c >> r >> c >> s;
    if (cat[0] == 'L')      v[0] = {v[0].first + r, v[0].second + s};
    else if (cat[0] == 'H') v[1] = {v[1].first + r, v[1].second + s};
    else if (cat[0] == 'P') v[2] = {v[2].first + r, v[2].second + s};
    else if (cat[0] == 'E') v[3] = {v[3].first + r, v[3].second + s};
  }

  cout << (int)(
    (double)v[0].first / v[0].second * l +
    (double)v[1].first / v[1].second * h +
    (double)v[2].first / v[2].second * p +
    (double)v[3].first / v[3].second * e
  );
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}