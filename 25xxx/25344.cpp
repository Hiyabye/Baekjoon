#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b) {
  return a / gcd(a, b) * b;
}

void solve(void) {
  int n; cin >> n;
  vector<int> t(n-2);
  for (int i=0; i<n-2; i++) cin >> t[i];

  int ans = t[0];
  for (int i=1; i<n-2; i++) ans = lcm(ans, t[i]);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}