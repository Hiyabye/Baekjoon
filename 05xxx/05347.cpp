#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
  if (!b) return a;
  return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
  return a * b / gcd(a, b);
}

void solve(void) {
  long long a, b;
  cin >> a >> b;
  cout << lcm(a, b) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n;
  cin >> n;
  while (n--) {
    solve();
  }
  return 0;
}