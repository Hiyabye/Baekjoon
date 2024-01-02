#include <iostream>
using namespace std;

void solve(void) {
  int n, q, p, sum;
  cin >> sum;
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> q >> p;
    sum += q * p;
  }
  
  cout << sum << "\n";
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