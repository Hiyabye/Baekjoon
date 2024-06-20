#include <iostream>
using namespace std;

void solve(void) {
  long long a, b, c; cin >> a >> b >> c;

  long long p = ((a*b)/(c*c))*(c*c);
  long long q = ((a*b+c*c-1)/(c*c))*(c*c);

  cout << (p && a*b-p < q-a*b ? p : q) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}