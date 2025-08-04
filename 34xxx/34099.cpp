#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  if (k == 1) {
    if (n >= 4) {
      for (int i=n-(n%2==0); i>=1; i-=2) cout << i << " ";
      for (int i=n-(n%2==1); i>=2; i-=2) cout << i << " ";
    } else {
      cout << -1;
    }
  } else {
    for (int i=1; i<=n; i++) cout << i << " ";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}