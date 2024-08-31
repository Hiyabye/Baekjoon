#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<pair<long long, int>> a(n+1);
  for (int i=0; i<=n; i++) {
    long long v, p, s; cin >> v >> p >> s;
    a[i] = {v + p + s, i};
  }
  sort(a.begin()+1, a.end(), greater<pair<long long, int>>());

  for (int i=0; i<=n && m; i++) {
    if (a[i].first > a[0].first) continue;
    cout << a[i].second << " "; m--;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}