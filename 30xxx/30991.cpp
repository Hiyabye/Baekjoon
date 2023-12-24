#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<long long> a(n+1, 0), b(n+1, 0), c(n+1, 0);
  a[0] = 0, b[0] = 0, c[0] = 1;
  for (int i=1; i<=n; i++) {
    a[i] = a[i-1] - c[i-1];
    b[i] = b[i-1] + c[i-1];
    c[i] = 2*a[i-1] - 2*b[i-1] + c[i-1];
  }
  cout << a[n] + b[n] + c[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}