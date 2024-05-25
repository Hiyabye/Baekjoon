#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int m, nmin, nmax; cin >> m >> nmin >> nmax;
  if (m == 0 && nmin == 0 && nmax == 0) return false;

  vector<int> p(m), q(m-1);
  for (int i=0; i<m; i++) cin >> p[i];
  for (int i=0; i<m-1; i++) q[i] = p[i] - p[i+1];

  int ans = nmin;
  for (int i=nmin+1; i<=nmax; i++) {
    if (q[ans-1] > q[i-1]) continue;
    ans = i;
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}