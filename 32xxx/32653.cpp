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
  vector<int> x(n);
  for (int i=0; i<n; i++) cin >> x[i];

  long long ans = x[0];
  for (int i=1; i<n; i++) {
    ans = lcm(ans, x[i]);
  }
  cout << 2 * ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}