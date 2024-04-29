#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> precompute(int n) {
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

  vector<int> primes;
  for (int i=0; i<=n; i++) {
    if (prime[i]) primes.push_back(i);
  }
  return primes;
}

int solve(const vector<int> &p) {
  int n; cin >> n;
  if (binary_search(p.begin(), p.end(), n)) return 0;

  auto it = lower_bound(p.begin(), p.end(), n);
  return *it - *prev(it);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> p = precompute(1299709);

  int t; cin >> t;
  while (t--) cout << solve(p) << "\n";
  return 0;
}