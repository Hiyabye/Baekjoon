#include <iomanip>
#include <iostream>
#include <unordered_map>
using namespace std;

void solve(void) {
  double w, l, d; cin >> w >> l >> d;

  unordered_map<int, double> dp; dp[2000] = 1.0;
  for (int i=0; i<20; i++) {
    unordered_map<int, double> tmp;
    for (auto& p : dp) {
      int j = p.first;
      tmp[j-50] += p.second * l;
      tmp[j] += p.second * d;
      tmp[j+50] += p.second * w;
    }
    dp = tmp;
  }

  for (int i=1; i<=5; i++) {
    double ans = 0.0;
    for (int j=500+500*i; j<1000+500*i; j+=50) {
      ans += dp[j];
    }
    cout << fixed << setprecision(8) << ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}