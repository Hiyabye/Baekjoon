#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double n, k; cin >> n >> k;
  double d, s; cin >> d >> s;

  double avg = (d * n - s * k) / (n - k);
  if (avg < 0 || avg > 100) cout << "impossible";
  else cout << fixed << setprecision(7) << avg;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}