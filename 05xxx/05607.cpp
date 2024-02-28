#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i] >> b[i];

  for (int i=0; i<n; i++) {
    if (a[i] > b[i]) a[i] += b[i], b[i] = 0;
    if (a[i] < b[i]) b[i] += a[i], a[i] = 0;
  }
  cout << accumulate(a.begin(), a.end(), 0) << " " << accumulate(b.begin(), b.end(), 0) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}