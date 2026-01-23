#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; double M; cin >> n >> M;
  vector<double> m(n), t(n), F(n);
  for (int i=0; i<n; i++) cin >> m[i] >> t[i] >> F[i];
  for (int i=0; i<n; i++) M += m[i];

  double h = 0.0, v = 0.0;
  for (int i=0; i<n; i++) {
    double a = F[i] / M - 9.81;
    h += v * t[i] + a * t[i] * t[i] / 2;
    v += a * t[i];
    M -= m[i];
  }
  cout << "Data Set " << idx << ":\n" << fixed << setprecision(2) << h;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) {
    solve(i);
    if (i != k) cout << "\n";
  }
  return 0;
}