#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> s(n), e(n), t(m), p(m);
  for (int i=0; i<n; i++) cin >> s[i] >> e[i];
  for (int i=0; i<m; i++) cin >> t[i] >> p[i];

  cout << fixed << setprecision(5) << (double)accumulate(p.begin(), p.end(), 0.0) / n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}