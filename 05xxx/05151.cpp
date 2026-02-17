#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, m, T; cin >> n >> m >> T;
  vector<double> v(n+1, 0.0);
  while (m--) {
    int i, t; double d; cin >> i >> t >> d;
    if (0 <= T - t && T - t < 1000) v[i] += d;
  }

  double yes = 0.0, no = 0.0;
  for (int i=1; i<=n; i++) {
    char c; cin >> c;
    if (c == 'Y') yes += 1.0;
    else no += 1.0 / (1.0 + v[i] / 10000.0);
  }
  cout << "Data Set " << idx << ":\n" << fixed << setprecision(2) << yes << " " << no << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}