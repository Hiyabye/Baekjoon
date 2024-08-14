#include <algorithm>
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

vector<long long> precompute(const vector<bool> &p) {
  vector<long long> v;
  for (long long i=1; i<100000; i++) {
    if (!p[i]) continue;
    for (long long j=i+1; j<=100000; j++) {
      if (!p[j]) continue;
      if (i * j > 100001) break;
      v.push_back(i * j);
    }
  }
  sort(v.begin(), v.end());
  return v;
}

void solve(const vector<long long> &v) {
  long long k; cin >> k;

  cout << *lower_bound(v.begin(), v.end(), k) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<long long> v = precompute(sieve(100000));

  int t; cin >> t;
  while (t--) solve(v);
  return 0;
}