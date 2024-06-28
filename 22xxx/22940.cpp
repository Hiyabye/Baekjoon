#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<double> > a(n, vector<double> (n));
  vector<double> b(n);
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) cin >> a[i][j];
    cin >> b[i];
  }

  for (int i=0; i<n; i++) {
    double div = a[i][i];
    for (int j=i; j<n; j++) a[i][j] /= div;
    b[i] /= div;

    for (int j=0; j<n; j++) {
      if (j == i) continue;
      double div = -a[j][i];
      for (int k=0; k<n; k++) a[j][k] += a[i][k] * div;
      b[j] += b[i] * div;
    }
  }

  cout << fixed << setprecision(0);
  for (int i=0; i<n; i++) cout << b[i] << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}