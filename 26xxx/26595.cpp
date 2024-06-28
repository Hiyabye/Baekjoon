#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  long long a, pa, b, pb; cin >> a >> pa >> b >> pb;

  long long x = 0, y = 0, mx = 0;
  for (long long i=0, j=n/pb; i<=n/pa; i++, j=(n-i*pa)/pb) {
    if (j < 0) break;
    if (a*i + b*j > mx) {
      mx = a*i + b*j;
      x = i; y = j;
    }
  }
  cout << x << " " << y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}