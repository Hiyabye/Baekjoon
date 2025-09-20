#include <iostream>
using namespace std;

void solve(void) {
  long long n, k; cin >> n >> k;

  if (n == 1 || n == 5) cout << k * 8 + n - 1;
  else if (k & 1)       cout << (k+1) * 4 - n + 1;
  else                  cout << k * 4 + n - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}