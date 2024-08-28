#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int n, m;
long long k, x, y;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
  return x * a.first - y * a.second < x * b.first - y * b.second;
}

void solve(void) {
  cin >> n >> m >> k >> x >> y;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end(), cmp);

  long long a = 0, b = 0;
  for (int i=0; i<m; i++) {
    a += v[i].first; b += v[i].second;
  }
  cout << (k + a) * x + (k - b) * y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}