#include <iostream>
using namespace std;

void solve(void) {
  long long n, p; cin >> n >> p;

  long long ans = 1;
  for (long long i=1; i<=n; i++) {
    ans = (ans * i) % p;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}