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
  int n, k; cin >> n >> k;

  for (int i=1; n>0 && i<=1000000; i++) {
    if (!p[i]) continue;
    if (i % k != 1) continue;
    cout << i << " ";
    n--;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<bool> p = sieve(1000000);
  solve(p);
  return 0;
}