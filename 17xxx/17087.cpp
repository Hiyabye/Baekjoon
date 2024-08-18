#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int n, s; cin >> n >> s;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = abs(s - a[0]);
  for (int i=1; i<n; i++) {
    ans = gcd(ans, abs(s - a[i]));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}