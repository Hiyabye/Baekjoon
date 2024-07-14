#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n);
  for (int i=0; i<n; i++) cin >> x[i];
  int m; cin >> m;
  vector<int> a(m);
  for (int i=0; i<m; i++) cin >> a[i], a[i]--;

  vector<bool> v(2020, false);
  for (int i=0; i<n; i++) v[x[i]] = true;

  for (int i=0; i<m; i++) {
    if (x[a[i]] == 2019 || v[x[a[i]]+1]) continue;
    v[x[a[i]]] = false;
    x[a[i]]++;
    v[x[a[i]]] = true;
  }

  for (int i=0; i<n; i++) {
    cout << x[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}