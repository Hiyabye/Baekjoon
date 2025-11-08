#include <iostream>
using namespace std;

void solve(void) {
  int a, b, n, k; cin >> a >> b >> n >> k;

  int x = (k+n-1) / n;
  cout << (x+b-1) / b << " " << (x % b ? x % b : b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}