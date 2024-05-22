#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<int, int> factorize(int x) {
  map<int, int> ret;
  for (int i=2; i*i<=x; i++) {
    while (!(x % i)) {
      x /= i;
      ret[i]++;
    }
  }
  if (x > 1) ret[x]++;
  return ret;
}

void solve(int idx) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];

  map<int, int> cnt;
  for (int i=0; i<n; i++) {
    map<int, int> f = factorize(a[i]);
    for (auto p : f) cnt[p.first] += p.second;
  }
  for (int i=0; i<m; i++) {
    map<int, int> f = factorize(b[i]);
    for (auto p : f) cnt[p.first] -= p.second;
  }

  int ans1 = 1, ans2 = 1;
  for (auto p : cnt) {
    for (int i=0; i<p.second; i++) ans1 *= p.first;
    for (int i=0; i<-p.second; i++) ans2 *= p.first;
  }
  cout << "Case #" << idx << ": " << ans1 << " / " << ans2 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}