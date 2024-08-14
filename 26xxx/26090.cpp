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
  vector<int> a(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];
  for (int i=1; i<=n; i++) a[i] += a[i-1];

  int ans = 0;
  for (int i=1; i<=n; i++) {
    if (!p[i]) continue;
    for (int j=i; j<=n; j++) {
      if (p[a[j] - a[j-i]]) ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve(sieve(1000000));
  return 0;
}