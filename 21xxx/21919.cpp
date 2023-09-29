#include <iostream>
#include <vector>
using namespace std;

vector<bool> prime(1000001, true);

void precompute(void) {
  prime[0] = prime[1] = false;
  for (int i=4; i<=1000000; i+=2) {
    prime[i] = false;
  }

  for (int i=3; i*i<=1000000; i+=2) {
    if (!prime[i]) continue;
    for (int j=i*i; j<=1000000; j+=i*2) {
      prime[j] = false;
    }
  }
}

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

long long lcm(long long a, long long b) {
  return a / gcd(a, b) * b;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  long long ans = 1;
  for (int i=0; i<n; i++) {
    if (prime[a[i]]) ans = lcm(ans, a[i]);
  }
  cout << (ans == 1 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  precompute();
  solve();
  return 0;
}