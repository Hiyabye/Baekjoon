#include <iostream>
using namespace std;

int t(int n) {
  return n*(n+1)/2;
}

int w(int n) {
  int sum = 0;
  for (int i=1; i<=n; i++) sum += i*t(i+1);
  return sum;
}

void solve(void) {
  int n; cin >> n;

  cout << w(n) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}