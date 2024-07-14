#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  for (int i=1; i<n; i++) a[i] += a[i-1];
  for (int i=1; i<n; i++) b[i] += b[i-1];

  vector<int> v;
  for (int i=0; i<n; i++) {
    if (a[i] > b[i]) v.push_back(1);
    else if (a[i] < b[i]) v.push_back(0);
  }

  int ans = 0;
  for (int i=1; i<v.size(); i++) {
    if (v[i] != v[i-1]) ans++;
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