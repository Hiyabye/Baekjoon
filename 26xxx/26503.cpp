#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  long long a, b, c, d; cin >> a >> b >> c >> d;

  long long num = a * d - b * c, den = b * d;
  long long g = gcd(num, den);
  if (num < 0 || num != g) cout << "NOT NEIGHBORS\n";
  else cout << num/g << "/" << den/g << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}