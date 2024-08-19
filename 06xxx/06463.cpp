#include <iomanip>
#include <iostream>
using namespace std;

void solve(int n) {
  int ans = 1, k = 0;

  for (int i=1; i<=n; i++) {
    int t = i;
    while (!(t % 2)) k++, t /= 2;
    while (!(t % 5)) k--, t /= 5;
    ans = (ans * t) % 10;
  }
  while (k--) ans = (ans * 2) % 10;

  cout << setw(5) << n << " -> " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  while (cin >> n) solve(n);
  return 0;
}