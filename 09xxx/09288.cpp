#include <iostream>
using namespace std;

void solve(int idx) {
  int n; cin >> n;

  cout << "Case " << idx << ":\n";
  for (int i=1; i<=6; i++) {
    if (i > n-i) break;
    if (1 <= n-i && n-i <= 6) cout << "(" << i << "," << n-i << ")\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}