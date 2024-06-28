#include <iostream>
using namespace std;

void solve(void) {
  int n, k, sum = 0;
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> k;
    sum += k;
  }
  
  cout << sum << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}