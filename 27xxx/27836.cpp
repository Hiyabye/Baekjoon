#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int ncs, ne; cin >> ncs >> ne;
  vector<long long> cs(ncs), e(ne);
  for (int i=0; i<ncs; i++) cin >> cs[i];
  for (int i=0; i<ne; i++) cin >> e[i];

  long long sum_cs = accumulate(cs.begin(), cs.end(), 0LL);
  long long sum_e = accumulate(e.begin(), e.end(), 0LL);

  int ans = 0;
  for (int i=0; i<ncs; i++) {
    if ((sum_cs - cs[i]) * ncs <= sum_cs * (ncs - 1)) continue;
    if ((sum_e + cs[i]) * ne <= sum_e * (ne + 1)) continue;
    ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}