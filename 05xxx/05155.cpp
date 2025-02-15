#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, m; cin >> n >> m;
  vector<int> p(m), c(m), u(m), r(m);
  for (int i=0; i<m; i++) cin >> p[i] >> c[i] >> u[i] >> r[i];

  vector<int> cnt(m, 0);
  while (n--) {
    int x; cin >> x; x--;
    cnt[x]++;
  }

  cout << "Data Set " << idx << ":\n";
  for (int i=0; i<m; i++) {
    if (min(cnt[i], u[i]) * (r[i] - c[i]) > p[i]) cout << i+1 << "\n";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}