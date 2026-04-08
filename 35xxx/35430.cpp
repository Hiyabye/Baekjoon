#include <iostream>
using namespace std;

void solve(void) {
  long long n, m, x; cin >> n >> m >> x;
  
  for (long long i=1; i*i<=x; i++) {
    if (x % i) continue;
    long long j = x / i;
    if (i <= n && j <= m) {
      cout << "1\n0 0 " << i << " " << j;
      return;
    } else if (j <= n && i <= m) {
      cout << "1\n0 0 " << j << " " << i;
      return;
    }
  }

  cout << "2\n";
  cout << "0 0 " << n << " " << x / n << "\n";
  cout << "0 " << x / n << " " << x % n << " " << x / n + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}