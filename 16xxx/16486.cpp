#include <bits/stdc++.h>
#define PI 3.141592
using namespace std;

void solve(void) {
  int d1, d2; cin >> d1 >> d2;

  double ans = 2*d2*PI + 2*d1;
  cout << setprecision(6) << fixed << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}