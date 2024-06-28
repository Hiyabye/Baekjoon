#include <iostream>
#define MOD 45678
using namespace std;

void solve(void) {
  long long n; cin >> n;

  cout << ((3*n*n + 5*n) / 2 + 1) % MOD;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}