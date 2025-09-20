#include <iostream>
using namespace std;

void solve(void) {
  long long n, a, b, c; cin >> n >> a >> b >> c;

  long long d = n * a * b * c;
  long long e = a*b + b*c + c*a;
  if (d % e || d / e < n) {
    cout << "-1\n";
    return;
  }

  long long k = d / e - n;
  if ((n+k)%a || (n+k)%b || (n+k)%c) {
    cout << "-1\n";
    return;
  }
  cout << k << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}