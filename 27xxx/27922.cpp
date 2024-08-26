#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(n), b(n), c(n);
  for (int i=0; i<n; i++) cin >> a[i] >> b[i] >> c[i];

  vector<int> p(n), q(n), r(n);
  for (int i=0; i<n; i++) {
    p[i] = a[i] + b[i];
    q[i] = b[i] + c[i];
    r[i] = c[i] + a[i];
  }
  sort(p.begin(), p.end(), greater<int>());
  sort(q.begin(), q.end(), greater<int>());
  sort(r.begin(), r.end(), greater<int>());

  int x = 0, y = 0, z = 0;
  for (int i=0; i<k; i++) {
    x += p[i];
    y += q[i];
    z += r[i];
  }
  cout << max({x, y, z});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}