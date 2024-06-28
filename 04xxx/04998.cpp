#include <iostream>
using namespace std;

void solve(void) {
  double n, b, m;

  while (cin >> n >> b >> m) {
    int ans = 0;
    while (n <= m) {
      n *= (1+b/100);
      ans++;
    }
    cout << ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}