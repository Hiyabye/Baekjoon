#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, x, y; cin >> n >> m >> x >> y;
  int k; cin >> k >> k;
  vector<int> v;
  while (--n) {
    int id, h; cin >> id >> h;
    if (id / 1000000 != 2024) continue;
    v.push_back(h + max(0, y-x+h));
  }
  sort(v.begin(), v.end(), greater<int>());

  if (v.size() < m) cout << "YES\n0";
  else if (k + y < v[m-1]) cout << "NO";
  else cout << "YES\n" << max(0, v[m-1] - k);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}