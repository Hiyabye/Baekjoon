#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  long long sum = 0;
  for (int i=0; i<n; i++) {
    long long x; cin >> x;
    sum = (sum + x) % n;
  }
  cout << (sum ? "NO" : "YES") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}