#include <iostream>
#define MOD 1000000007
using namespace std;

long long fact(int n) {
  long long ans = 1;
  for (int i=1; i<=n; i++) ans = ans * i % MOD;
  return ans;
}

void solve(void) {
  int n; cin >> n;

  cout << fact(n) - 1 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}