#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

long long lcm(long long a, long long b) {
  return a / gcd(a, b) * b;
}

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n), b(n);
  for (int i=0; i<n; i++) {
    cin >> a[i] >> b[i];
    long long g = gcd(a[i], b[i]);
    a[i] /= g; b[i] /= g;
  }

  long long p = a[0], q = b[0];
  for (int i=1; i<n; i++) {
    p = gcd(p, a[i]);
    q = lcm(q, b[i]);
  }
  cout << p << " " << q;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}