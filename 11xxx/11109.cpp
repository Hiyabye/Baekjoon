#include <iostream>
using namespace std;

void solve(void) {
  int d, n, s, p;
  cin >> d >> n >> s >> p;

  if (d+n*p < n*s) cout << "parallelize\n";
  else if (d+n*p > n*s) cout << "do not parallelize\n";
  else cout << "does not matter\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}