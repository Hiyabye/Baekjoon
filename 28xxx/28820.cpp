#include <iostream>
#include <vector>
using namespace std;

inline long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

inline long long lcm(long long a, long long b) {
  return a / gcd(a, b) * b;
}

void solve(void) {
  int n, s; cin >> n >> s;
  vector<int> d(n);
  for (int i=0; i<n; i++) cin >> d[i];

  long long ans = d[0];
  for (int i=1; i<n; i++) ans = lcm(ans, d[i]);
  cout << (s+ans-1) % 7 + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}