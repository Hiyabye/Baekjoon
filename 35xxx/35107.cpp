#include <iomanip>
#include <iostream>
using namespace std;

inline double p(int n, int m, int x) {
  double ret = 1.0;
  for (int i=0; i<x; i++) {
    ret *= (double)(n-m-i) / (n-i);
  }
  return 1.0 - ret;
}

void solve(void) {
  int n, m, k; cin >> n >> m >> k;

  for (int i=1; i<=k; i++) {
    cout << fixed << setprecision(7) << p(n, m, i) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}