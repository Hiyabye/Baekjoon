#include <bits/stdc++.h>

using namespace std;

void solve(void) {
  int n;
  cin >> n;
  cout << "Pairs for " << n << ": ";

  for (int i=1; i<=n/2; i++) {
    if (i == n-i) continue;
    if (i != 1) cout << ", ";
    cout << i << " " << n-i;
  }
  cout << "\n";
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