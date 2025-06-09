#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#define MOD 1000000007
using namespace std;

inline long long add(long long a, long long b) {
  return (a + b + MOD) % MOD;
}

void solve(void) {
  int n; cin >> n;
  vector<int> s(n);
  for (int i=0; i<n; i++) cin >> s[i];
  if (n < 3) { cout << 0; return; }

  long long ans = 0;
  vector<vector<long long>> a(n), b(n), c(n);
  for (int i=0; i<n; i++) {
    vector<pair<long long, pair<long long, long long>>> p(i);
    for (int j=0; j<i; j++) {
      long long cnt = 1, sum = 2;
      for (long long d=-1; d<=1; d++) {
        auto it = lower_bound(a[j].begin(), a[j].end(), s[i]-s[j]+d);
        if (it == a[j].end() || *it != s[i]-s[j]+d) continue;
        int idx = distance(a[j].begin(), it);
        ans = add(ans, add(b[j][idx], c[j][idx]));
        cnt = add(cnt, b[j][idx]);
        sum = add(sum, add(b[j][idx], c[j][idx]));
      }
      p[j] = {s[i]-s[j], {cnt, sum}};
    }
    sort(p.begin(), p.end(), [](auto &a, auto &b){ return a.first < b.first; });
    a[i].reserve(p.size()); b[i].reserve(p.size()); c[i].reserve(p.size());
    for (int k=0, m=p.size(); k<m; ) {
      long long d = p[k].first;
      long long cnt = 0, sum = 0;
      while (k < m && p[k].first == d) {
        cnt = add(cnt, p[k].second.first);
        sum = add(sum, p[k].second.second);
        k++;
      }
      a[i].push_back(d);
      b[i].push_back(cnt);
      c[i].push_back(sum);
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