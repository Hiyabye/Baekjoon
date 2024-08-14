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
  int k; cin >> k;

  for (int i=2; i+4<=k; i++) {
    if (!p[i]) continue;
    for (int j=2; i+j+2<=k; j++) {
      if (!p[j]) continue;
      if (p[k-i-j]) {
        cout << i << " " << j << " " << k-i-j << "\n";
        return;
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<bool> p = sieve(1000);

  int t; cin >> t;
  while (t--) solve(p);
  return 0;
}