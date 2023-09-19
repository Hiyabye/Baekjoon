#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int d1, d2, d3; cin >> d1 >> d2 >> d3;

  double a = (d1 + d2 - d3) / 2.0;
  double b = (d1 + d3 - d2) / 2.0;
  double c = (d2 + d3 - d1) / 2.0;

  if (a <= 0 || b <= 0 || c <= 0) cout << "-1";
  else cout << "1\n" << fixed << setprecision(1) << a << " " << b << " " << c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}