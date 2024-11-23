#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> a, b;
  while (n--) {
    string s; long long t; cin >> s >> t;
    if (s == "pig") a.push_back(t);
    else            b.push_back(t);
  }
  sort(b.begin(), b.end());

  vector<long long> c(b.size()+1, 0);
  for (int i=0; i<b.size(); i++) {
    c[i+1] = c[i] + b[i];
  }

  long long ans = 0;
  for (long long x : a) {
    int idx = distance(b.begin(), lower_bound(b.begin(), b.end(), x));
    ans = max(ans, c[idx] + x);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}