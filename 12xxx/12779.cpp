#include <cmath>
#include <iostream>
using namespace std;

inline long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  long long a, b; cin >> a >> b;

  long long cnt = 0;
  for (long long i=sqrt(a); i*i<=b; i++) {
    if (i*i > a) cnt++;
  }
  long long g = gcd(cnt, b-a);

  if (cnt == 0) cout << 0;
  else cout << cnt/g << '/' << (b-a)/g;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}