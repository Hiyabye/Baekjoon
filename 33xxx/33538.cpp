#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int l; cin >> l;
  int n; cin >> n;
  double t; cin >> t;
  vector<double> f(n), b(n);
  for (int i=0; i<n; i++) cin >> f[i] >> b[i];

  for (int i=0; i<n; i++) {
    if (l / f[i] + l / b[i] < t) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "HOPE" : "DOOMED");
  return 0;
}