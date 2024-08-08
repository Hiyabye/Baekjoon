#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

long long lcm(long long a, long long b) {
  return a / gcd(a, b) * b;
}

void solve(void) {
  int w; cin >> w;
  vector<long long> p(w);
  for (int i=0; i<w; i++) cin >> p[i];

  long long ans = 1;
  for (int i=0; i<w; i++) {
    ans = lcm(ans, p[i]);
  }
  cout << (ans <= 1e9 ? to_string(ans) : "More than a billion.") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}