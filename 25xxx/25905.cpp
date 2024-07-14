#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<double> p(10);
  for (int i=0; i<10; i++) cin >> p[i];
  sort(p.begin(), p.end(), greater<double>());

  double ans = 1e9;
  for (int i=0; i<9; i++) {
    ans *= p[i] / (i+1);
  }
  cout << fixed << setprecision(7) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}