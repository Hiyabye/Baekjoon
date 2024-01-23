#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int x; cin >> x;
  
  double ans = 0;
  for (int i=0; i<x; i++) {
    string s; int q; double p;
    cin >> s >> q >> p;
    ans += q * p;
  }
  cout << fixed << setprecision(2) << "$" << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}