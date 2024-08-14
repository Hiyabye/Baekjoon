#include <iostream>
#include <vector>
using namespace std;

vector<bool> sieve(int n) {
  vector<bool> prime(n+1, true);
  prime[0] = prime[1] = false;
  for (int i=4; i<=n; i+=2) {
    prime[i] = false;
  }
  for (int i=3; i*i<=n; i+=2) {
    if (!prime[i]) continue;
    for (int j=i*i; j<=n; j+=i*2) {
      prime[j] = false;
    }
  }
  return prime;
}

bool solve(const vector<bool> &p) {
  int n; cin >> n;
  if (n == 0) return false;

  int ans = 0;
  for (int i=2; i<=n/2; i++) {
    if (p[i] && p[n-i]) ans++;
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<bool> p = sieve(1 << 15);
  while (solve(p));
  return 0;
}