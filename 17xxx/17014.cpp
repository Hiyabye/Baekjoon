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

void solve(const vector<bool> &p) {
  int n; cin >> n;

  for (int i=0; i<n; i++) {
    if (p[n-i] && p[n+i]) {
      cout << n-i << " " << n+i << "\n";
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<bool> p = sieve(2000000);

  int t; cin >> t;
  while (t--) solve(p);
  return 0;
}