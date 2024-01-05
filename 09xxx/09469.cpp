#include <iostream>
#include <iomanip>
using namespace std;

void solve(void) {
  int n; double d, a, b, f;
  cin >> n >> d >> a >> b >> f;

  cout << n << " " << fixed << setprecision(6) << d/(a+b)*f << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int p; cin >> p;
  while (p--) solve();
  return 0;
}